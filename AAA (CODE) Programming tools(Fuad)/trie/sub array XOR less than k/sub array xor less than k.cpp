#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

class tnode
{
    public:
    lld rcnt,lcnt;
    tnode *next[2];
};


tnode *newnode()
{
tnode *temp=new tnode;
temp->rcnt=temp->lcnt=0;
temp->next[1]=temp->next[0]=NULL;
return temp;
}




void insert(tnode *root, lld prexor)
{
    tnode *temp=root;
    for(int i=30;i>=0;i--)
    {
        bool val=(prexor>>i&1);
        if(val)
        {
            temp->rcnt++;
            if(temp->next[1]==NULL)
                temp->next[1]=newnode();
            temp=temp->next[1];
        }
        else
        {
            temp->lcnt++;
            if(temp->next[0]==NULL)
                temp->next[0]=newnode();
            temp=temp->next[0];
        }
    }
}



lld query(tnode *root,lld prexor,lld k)
{
    tnode  *temp=root;
    lld ans=0;
    for(int i=30;i>=0;i--)
    {
        int val1=(prexor>>i&1);
        int val2=(k>>i&1);
        if(val2)
        {
            if(val1)
            {
                ans+=temp->rcnt;
                if(temp->next[0]==NULL)
                    return ans;
                temp=temp->next[0];
            }
            else
            {
                ans+=temp->lcnt;
                if(temp->next[1]==NULL)
                    return ans;
                temp=temp->next[1];
            }
        }
        else
        {
            if(val1)
            {
                if(temp->next[1]==NULL)
                    return ans;
                temp=temp->next[1];
            }
            else
            {
                if(temp->next[0]==NULL)
                    return ans;
                temp=temp->next[0];
            }
        }
    }

    return ans;
}
/*
void del(tnode *root)
{for(int i=0;i<2;i++)
if(root->next[i]==NULL)
del(root->next[i]);
delete(root);
}*/





int main()
{

        lld n,k;
        scanf("%lld%lld",&n,&k);

        int a[n];
        tnode *root=newnode();
        lld prexor=0;
        insert(root,0);

        lld res=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            prexor=prexor^a[i];

            res+=(lld)query(root,prexor,k);
            insert(root,prexor);
        }

        lld sb=n*(n+1);

        sb=sb/2;
        printf("%lld\n",sb-res);


    return 0;
}
