#include<bits/stdc++.h>
using namespace std;

int dfa_table[100][100];

int main()
{
    map<char, int> charMap;

    charMap['+'] = 0;
    charMap['-'] = 1;
    charMap['.'] = 2;
    charMap['0'] = 3;
    charMap['1'] = 3;
    charMap['2'] = 3;
    charMap['3'] = 3;
    charMap['4'] = 3;
    charMap['5'] = 3;
    charMap['6'] = 3;
    charMap['7'] = 3;
    charMap['8'] = 3;
    charMap['9'] = 3;

    //////////
    int no_of_states, no_of_symbol;

    cout<<"Enter Number of States "<<endl;

    cin>>no_of_states;

    cout<<"Enter Number of Input Symbols "<<endl;

    cin>>no_of_symbol;

    for(int i=0;i<no_of_states; i++)
    {
        for(int j=0; j<no_of_symbol; j++)
        {
            char c;

            switch(j)
            {
                case 0: c = '+';break;
                case 1: c = '-';break;
                case 2: c = '.';break;
                case 3: c = '#';break;
            }

            printf("q%d ---->%c: q",i, c);

            cin>>dfa_table[i][j];
        }
    }

    int start_state, accepting_state;

    cout<<"Enter start state"<<endl;
    cout<<"q";
    cin>>start_state;

    vector<int> accepting_states;

    cout<<"Enter accepting states"<<endl;

    while(1)
    {
        cout<<"q";

        int x;

        cin>>x;

        if(x==-1)
            break;

        accepting_states.push_back(x);

    }

    int current_state = start_state;

    //////////////
    cout<<endl<<"Transition Table"<<endl;

    cout<<"\t+\t-\t.\t0,1,2,..9"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    for(int i=0;i<no_of_states; i++)
    {
        printf("q%d",i);

        for(int j=0; j<no_of_symbol; j++)
            printf("\tq%d", dfa_table[i][j]);

        cout<<endl;
    }
    ///////////////

    cout<<endl<<"Enter input string"<<endl;

    string input;

    cin>>input;

    vector<int> path;

    for(int i=0; i<input.size(); i++)
    {
        int ch = charMap[input[i]];

        path.push_back(current_state);

        current_state = dfa_table[current_state][ch];
    }

    if(current_state==accepting_states[0] || current_state==accepting_states[1] )
        cout<<"Input Accepted"<<endl;
    else
        cout<<"Input Rejected"<<endl;

    cout<<endl<<"Transition Path"<<endl;

    for(int i=0;i<path.size();i++)
    {
        if(i!=path.size()-1)
            cout<<"q"<<path[i]<<"-->";
        else
            cout<<"q"<<path[i];
    }

    return 0;
}
