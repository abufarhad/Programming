//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)              printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()

struct node
{
    ll val;
    struct node *next;
};
struct node *head;

void Insert(ll data)
{
    node *newnode=new node();
    newnode->val=data;
    newnode->next=head;

    head=newnode;
}

void display()
{
    struct node *tmp=head;
    while(tmp !=NULL)
    {
        cout<<(tmp->val)<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void reversed(node *prev,  node *cur )
{
    if(cur->next ==   NULL )
    {
        head=cur;
        cur->next=prev;
        return;
    }

    reversed(cur , cur->next);

    cur->next=prev;
}


int main()
{
   ll n, x;
   cin>>n;
   struct node* cur=NULL , *prev=NULL;

   fr(i , n)
   {
       cin>>x;
       cur=new node();
       cur->val=x;

       if(i==0)head=cur;
       else prev->next=cur;
       prev=cur;
   }
   display();

   reversed(NULL , head);

   display();

//   fr(i , n)
//   {
//       cin>>x;
//       Insert(x);
//   }



}

