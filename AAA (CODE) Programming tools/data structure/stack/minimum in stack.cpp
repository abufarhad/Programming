#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cout<<"Enter number of query : ";
    cin>>q;

    stack<int>main_stack;
    stack<int>suppor_stack;
    cout<<"\n\n\tpress 1 for push press 2 for pop press 3 for get min value \n"<<endl;

    int op;int value;

    while(q--)
    {
        cout<<"choice : ";
        cin>>op;

        if(op==1)
        {
            cout<<"enter value : ";
            cin>>value;
            main_stack.push(value);

            if(suppor_stack.size()==0)
            {

                suppor_stack.push(value);
            }
            else if(main_stack.top()<suppor_stack.top())
            {
                suppor_stack.push(value);
            }
        }
        else if(op==2)
        {
            if(main_stack.top()==suppor_stack.top())
            {
                main_stack.pop();
                suppor_stack.pop();
            }
            else
                main_stack.pop();
        }
        else if(op==3)
        {
            cout<<"current min : "<<suppor_stack.top()<<endl;
        }

    }
    return 0;
}
