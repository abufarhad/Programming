#include<bits/stdc++.h>
using namespace std;


string stringmaker(char x){

    stringstream ss;
    ss<<x;
    string b;
    ss>>b;
    return b;
}

int main()
{
    stack<string>stk;///will keep track of the stack of operator
    list<string>lst;///item will be in post fix notation

    char tem[100];///just to take the input equation without any space
    string b,s_sum="";
    cin>>tem;

    int i;
    vector<string>input;///will divide the operator and operand


    for(i=0;i<strlen(tem);i++)
    {
        s_sum="";

        if(tem[i]>='0' && tem[i]<='9'){

            while(tem[i]>='0' && tem[i]<='9'){

                b=stringmaker(tem[i]);
                s_sum+=b;
                i++;
            }
            input.push_back(s_sum);
            i--;
        }
        else{
            b=stringmaker(tem[i]);
            input.push_back(b);
        }
    }
    input.push_back(")");

//    for(i=0;i<input.size();i++)/// input in tem check
//        cout<<input[i]<<endl;


    stk.push("(");///A+(B*C-(D/E^F)*G)*H
    for(i=0;i<input.size();i++){
        if(input[i]=="("|| input[i]==")" || input[i]=="^" || input[i]=="+" || input[i]=="-" || input[i]=="*" ||input[i]=="/")
        {

            if((stk.top()=="^") && (input[i]=="+" || input[i]=="-" || input[i]=="*" ||input[i]=="/"))
             {
                 lst.push_back(stk.top());
                 stk.pop();
                 stk.push(input[i]);
             }

             if((stk.top()=="*" || stk.top()=="/") && (input[i]=="+" || input[i]=="-"))
             {
                 lst.push_back(stk.top());
                 stk.pop();
                 stk.push(input[i]);
             }
             else
                stk.push(input[i]);

             if(input[i]==")"){
                stk.pop();
                while(1){

                    lst.push_back(stk.top());
                    stk.pop();
                    if(stk.top()=="(")
                        break;

                   }
                    stk.pop();
                }

            }
            else
                lst.push_back(input[i]);


    }
    for(list<string>::iterator it=lst.begin();it!=lst.end();it++)///printing the postfix notation
        cout<<*it;
    cout<<"\n\n*****************************************************\n\n";
        int value= value;
    for(list<string>::iterator it=lst.begin();it!=lst.end();it++)///calculattion of postfix notation
        {
            lst[0].remove();        }

    return 0;
}
