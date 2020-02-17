#include <bits/stdc++.h>
using namespace std;
float input[1000][20];
float a[1000],b;
stack<float>v;
vector<float>w;
vector<int>output;
vector<int>ac;
int main()
{
    float weight[100],tr=0.30,sum=0.0,r=0.0,f,eta=0.4,del,dw;
    int i,j,k,l,p,n,t,ar[100];
    memset(input,0,sizeof(input));
    ifstream myfile;
    //freopen("input.txt","r",stdin);
    //freopen("weight.txt","w",stdout);
    cin>>n;
    int q,s,g,m,x,c,dif;

    g=pow(2,n);
    //binary converter
    for(i=1;i<g/2;i++)
    {
        ac.push_back(0);
    }
    for(i=g/2;i<g;i++)
    {
        ac.push_back(1);
    }
    for(t=1;t<g;t++)
    {
        m=t;
        q=0;
        while(m!=0)
        {
            a[q]=m%2;
            m=m/2;
            q++;
        }
        x=0;
        //0 padding
        for(s=0;s<q;s++)
        {
            b=a[s];
            v.push(b);
            x++;

        }
        dif=n-x;
        //cout<<"Diff="<<dif<<endl;
        for(c=1;c<=dif;c++)
        {
            v.push(0);
        }
    }
    //cout<<endl;
    //cout<<v.size()<<endl;
    //extracting from stack
    int cnt=0;
    for(i=v.size()-1;i>=0;i--)
    {
       //cout<<v.top();
       f=v.top();
       w.push_back(f);
       v.pop();

    }
    i=0;
    k=0;
    //converting to 2d array
    for(j=0;j<w.size();j++)
    {
       //cout<<w[j];
       cnt++;
       input[i][k]=w[j];
       k++;
       if(cnt%n==0)
       {
           i++;
           k=0;
           input[i][k]=w[j];
           //cout<<endl;
       }



    }
    for(i=g-2;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            //cout<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<input[i][j]<<" ";
        }
        //cout<<endl;
    }

    myfile.open("weight.txt");
    q=0;
    while(myfile>>dw)
    {
        weight[q]=dw;
        cout<<weight[q]<<endl;
        q++;
    }

    for(i=g-2;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            //cout<<weight[j]<<endl;
            r=r+weight[j]*input[i][j];
        }
        //cout<<r<<endl;
        if(r>tr)
        {
            cout<<1<<endl;
            output.push_back(1);
        }
        else
        {
            cout<<0<<endl;
            output.push_back(0);
        }
    }
    //Accuracy Measure
    float right=0.0;
    for(i=0;i<ac.size();i++)
    {
        if(ac[i]==output[i])
        {
            right++;
        }
    }
    cout<<endl;
    cout<<"Testing Accuracy="<<(right/(float)(g-2))*100.0<<"%"<<endl;



    return 0;


}

