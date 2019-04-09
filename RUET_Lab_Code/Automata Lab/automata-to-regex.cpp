#include<bits/stdc++.h>
using namespace std;

int dfa_table[100][100];

int main()
{
    int no_of_states, no_of_symbol;

    cout<<"Enter Number of States "<<endl;

    cin>>no_of_states;

    cout<<"Enter Number of Input Symbols "<<endl;

    cin>>no_of_symbol;

    for(int i=1;i<=no_of_states; i++)
    {
        for(int j=0; j<no_of_symbol; j++)
        {
            printf("q%d ---->%d: q",i, j);

            cin>>dfa_table[i][j];
        }
    }

    int start_state, accepting_state;

    cout<<"Enter start state"<<endl;
    cout<<"q";
    cin>>start_state;

    cout<<"Enter accepting state"<<endl;
    cout<<"q";
    cin>>accepting_state;

    ////////////////////////////////////////////


    map<pair<int, pair<int,int> >, string> R;

    for(int i=1;i<=no_of_states;i++)
    {
        for(int j=1;j<=no_of_states;j++)
        {
            string temp;

            if(dfa_table[i][0]==j || dfa_table[i][1]==j)
            {
                if(dfa_table[i][0]==j && dfa_table[i][1]==j)
                {
                    if(i==j)
                        temp = "(e+0+1)";
                    else
                        temp ="(0+1)";
                }
                else if(dfa_table[i][0]==j)
                {
                    if(i==j)
                        temp = "(e+0)";
                    else
                        temp ="0";
                }
                else
                {
                    if(i==j)
                        temp = "(e+1)";
                    else
                        temp ="1";
                }
            }
            else
                temp = "-1";

            R[make_pair(0, make_pair(i,j))] = temp;
        }
    }

//    R[make_pair(0,make_pair(1,1))] = "(e+1)";
//    R[make_pair(0,make_pair(1,2))] = "0";
//    R[make_pair(0,make_pair(2,1))] = "-1";
//    R[make_pair(0,make_pair(2,2))] = "(e+0+1)";

////////////////////////////////////////////////////////


    for(int i=1;i<=no_of_states;i++)
    {
        for(int j=1;j<=no_of_states;j++)
        {
            printf("R[%d][%d](0) = %s\n",i,j,R[make_pair(0,make_pair(i,j))].c_str());
        }
    }

    cout<<endl;

    for(int k=1;k<=no_of_states;k++)
    {
        for(int i=1;i<=no_of_states;i++)
        {
            for(int j=1;j<=no_of_states;j++)
            {
                string prev_Rij = R[make_pair(k-1, make_pair(i,j))];
                string prev_Rik = R[make_pair(k-1, make_pair(i,k))];
                string prev_Rkk = R[make_pair(k-1, make_pair(k,k))];
                string prev_Rkj = R[make_pair(k-1, make_pair(k,j))];

                string temp;

                if(prev_Rij=="-1" || prev_Rik=="-1" || prev_Rkk=="-1"|| prev_Rkj=="-1")
                {
                    if(prev_Rij=="-1")
                    {
                        if(prev_Rik=="-1" || prev_Rkk=="-1"|| prev_Rkj=="-1")
                        {
                            temp = "-1";
                        }
                        else
                        {
                            temp = "("+ prev_Rik + "("+ prev_Rkk +")*" + prev_Rkj + ")";
                        }

                    }
                    else
                    {
                        temp =  ""+prev_Rij;
                    }

                }
                else
                {
                    temp = "("+ prev_Rij + "+" + prev_Rik + "("+ prev_Rkk +")*" + prev_Rkj + ")";
                }


                printf("R[%d][%d](%d) = %s\n",i,j,k, temp.c_str());

                R[make_pair(k, make_pair(i,j))] = temp;
            }
        }

        cout<<endl;

    }


    cout<<endl<<"Converted Regular expression: "<<R[make_pair(no_of_states, make_pair(start_state,accepting_state))];

    return 0;
}
