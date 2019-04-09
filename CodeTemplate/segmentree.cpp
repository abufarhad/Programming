
ll int tree[1000000+1];


void  create(ll node,ll b,ll e)
{

    if(b==e)
    {


        tree[node]=A[b];
        return ;
    }
    ll int  l,r,m;

    m=(b+e)/2;
    l=2*node;
    r=l+1;


    create(l,b,m);
    create(r,m+1,e);
    tree[node]=tree[l]+tree[right];

}

void  update(ll int node,ll  int b,ll int e,ll int i,ll  int j)
{
    //cout<<b<<" "<<e<<" "<<i<<" "<<j<<endl;

    if(e<i||b>j)
    {
        return ;
    }
    //cout<<"jk\n";
    if(i<=b&&e<=j)
    {
        tree[node]++;
        return ;
    }

    ll int  l,r,m;

    m=(b+e)/2;
    l=2*node;
    r=l+1;
    update(l,b,m,i,j);
    update(r,m+1,e,i,j);

    tree[node]=tree[l]+tree[r];

}

ll int   query(ll int node,ll int b,ll int e,ll int k)
{

    if(b==e)
    {
        return(ll int ) b;

    }
    ll int  x;
    ll int  l,r,m;

    m=(b+e)/2;
    l=2*node;
    r=l+1;


    if(tree[l]>=k)
    {
        x= query(l,b,m,k);

    }
    else
    {
        x= query(r,m+1,e,k-(tree[l]));
    }
    return x;

}





