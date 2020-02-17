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
    float weight[100],tr=0.30,sum=0.0,r=0.0,f,eta=0.4,del;
    int i,j,k,l,p,n,t,ar[100];
    memset(input,0,sizeof(input));
    //freopen("input.txt","r",stdin);
    freopen("weight.txt","w",stdout);
    cin>>n;
    int q,s,g,m,x,c,dif;
    for(i=0;i<n;i++)
    {
        weight[i]=((float)rand()/(RAND_MAX))+1;
        //cout<<weight[i]<<endl;
    }
    g=pow(2,n);

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
    //Binary Testing
    /*
    for(i=g-2;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<input[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //Training
    for(l=0;l<5;l++)
    {
        //cout<<"EPOCH"<<l<<endl;
        start:
        //first half is for 0
        for(i=g-2;i>=g/2;i--)
        {
            sum=0.0;

            for(j=0;j<n;j++)
            {
                sum=sum+weight[j]*input[i][j];
                if(sum>=tr && input[i][j]==1)
                {
                    k=j;
                    del=(0-sum);
                    weight[k]=weight[k]+eta*del*input[i][k];
                    goto start;

                }

            }

        }

//         for(k=0;k<n;k++)
//         {
//              cout<<"Weight="<<weight[k]<<endl;
//         }
         //cout<<"......................"<<endl;

        st:
        //last half is for 1
        for(i=(g/2)-1;i>=0;i--)
        {
            sum=0.0;

            for(j=0;j<n;j++)
            {
                sum=sum+weight[j]*input[i][j];
                if(sum<tr && input[i][j]==1 )
                {
                    k=j;
                    del=1-sum;
                    weight[k]=weight[k]+eta*del*input[i][k];
                    //cout<<"Input"<<j<<input[i][j]<<endl;
                    //cout<<"Weight="<<weight[k]<<endl;
                    goto st;
                    //cout<<k<<endl;
                }


            }


        }
    }

    //cout<<"Final Weight"<<endl;
    for(k=0;k<n;k++)
    {
        cout<<weight[k]<<endl;
    }
    //Testing
    /*
    for(i=g-2;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            r=r+weight[j]*input[i][j];
        }
        //cout<<r<<endl;
        if(r>tr)
        {
            //cout<<1<<endl;
            output.push_back(1);
        }
        else
        {
            //cout<<0<<endl;
            output.push_back(0);
        }
    }*/



    return 0;


}
