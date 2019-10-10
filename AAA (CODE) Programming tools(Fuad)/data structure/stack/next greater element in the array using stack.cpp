#include<bits/stdc++.h>
using namespace std;

int next[1000];
int main()
{
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];


    stack<int>st;
    st.push(arr[0]);


    for(int i=1;i<n;i++)
    {
        if(st.empty()==false)
        {
            int tp=st.top();
            st.pop();

            while(arr[i]>tp)
            {
               next[tp]=arr[i];
               if(st.empty()==true)
                    break;
                tp=st.top();
                st.pop();

            }
            if(tp>arr[i])
                st.push(tp);


        }
        st.push(arr[i]);

    }

    while(!st.empty())
    {
        next[st.top()]=-1;
        st.pop();
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" -> "<<next[arr[i] ]<<endl;
    }

    return 0;
}
