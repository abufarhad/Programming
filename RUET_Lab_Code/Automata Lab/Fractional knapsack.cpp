#include<bits/stdc++.h>
using namespace std;
#define max_capacity 15
#define max_item 5

map<int,vector<double> >statagy1;
map<int,vector<double> >statagy2;
map<int,vector<double> >statagy3;

struct item
{
    double w,c;

    int no;

};

item items[max_item];

bool cmpw(item p,item q)
{
    if(p.w==q.w)
        return p.c<=q.c;

    return p.w>=q.w;
}

bool cmpc(item p,item q)
{
    if(p.c==q.c)
        return p.w>=q.w;

    return p.c<q.c;
}


bool cmpcpu(item a, item b)
{
    double c1 = a.c/a.w;
    double c2= b.c/b.w;

    return c1<=c2;
}

double solnWRTweight()
{
    double cost=0;
    double aviable_capacity=15;
    for(int i=0; i<max_item; i++)
    {
        item it=items[i];
         /// cout<<"it.c  "<<it.c<<" "<<"it.w  "<<it.w<<endl;
        if(aviable_capacity<=0) break;
        if(it.w>aviable_capacity)
        {
             ///  cout<<"cost  "<<cost<<endl;
          ///   cout<<"Aviable capacity  "<<available_capacity/it.w<<endl;

            cost+=(it.c*aviable_capacity)/it.w;
            statagy1[it.no].push_back(aviable_capacity/it.w);
            aviable_capacity=0;
        }
        else
        {
            aviable_capacity-=it.w;
            statagy1[it.no].push_back(1.0);
            cost+=it.c;
        }
    }
    return cost;
}


double solnWRTCost()
{
    double cost = 0;
    double available_capacity = 15.0;

    for(int i=0;i<max_item ;i++)
    {
        item it = items[i];
 /// cout<<"it.c  "<<it.c<<" "<<"it.w  "<<it.w<<endl;

        if(available_capacity<=0)
            break;
        if(it.w>available_capacity)
        {
             ///  cout<<"cost  "<<cost<<endl;
          ///   cout<<"Aviable capacity  "<<available_capacity/it.w<<endl;

            cost+= (it.c*available_capacity)/it.w;

            statagy2[it.no].push_back(available_capacity/it.w);

            available_capacity = 0;
        }
        else
        {
            available_capacity -= it.w;

            statagy2[it.no].push_back(1.0);

            cost+=it.c;
        }

    }

    return cost;
}

double solnPerUnitCost()
{
    double cost = 0;
    double available_capacity = 15.0;


    for(int i=0;i<max_item;i++)
    {
        item it = items[i];
 /// cout<<"it.c  "<<it.c<<" "<<"it.w  "<<it.w<<endl;

        if(available_capacity<=0)
            break;
        if(it.w>available_capacity)
        {
             ///  cout<<"cost  "<<cost<<endl;
          ///   cout<<"Aviable capacity  "<<available_capacity/it.w<<endl;

            cost+= (it.c*available_capacity)/it.w;

            statagy3[it.no].push_back(available_capacity/it.w);

            available_capacity = 0;
        }
        else
        {
            available_capacity -= it.w;

            statagy3[it.no].push_back(1.0);

            cost+=it.c;
        }
    }

    return cost;
}

int main()
{
    srand(time(NULL));
     cout<<"Item "<<"         "<<"Cost "<<"       "<<"Weight "<<endl;
    for(int i=0; i<max_item; i++)
    {
        items[i].c=rand()%40+10;
        items[i].w=rand()%15+1;

        items[i].no=i+1;
        // cout<<"Item "<<items[i].no<<": "<<"Cost: "<<items[i].c<<" "<<"Weight: "<<items[i].w<<endl;

      //  cout<<"Item "<<items[i].no<<": "<<"Cost: "<<items[i].c<<" "<<"Weight: "<<items[i].w<<endl;
         cout<<items[i].no<<":             "<<items[i].c<<"           "<<items[i].w<<endl;

    }

    cout<<"---------->>>>>>"<<endl;



    sort(items,items+max_item,cmpw);

    double result=solnWRTweight();

    for(int i=0; i<max_capacity; i++)
    {
        item it=items[i];

        for(int j = 0; j<statagy1[it.no].size(); j++)
        {
            printf("\nNumber of Item %d  vector: %f   Cost= %f\n", it.no, statagy1[it.no].at(j),it.c,statagy1[it.no].at(j)*it.c);

        }
    }
    cout<<endl<<"Solution by weight ="<<result<<" Taka"<<endl;

    cout<<"------------->>>>"<<endl;

    sort(items, items+max_item, cmpc);

    result=solnWRTCost();


    for(int i=0; i<max_capacity; i++)
    {
        item it=items[i];
        for(int j = 0; j<statagy2[it.no].size(); j++)
  {
            printf("\nNumber of Item %d  vector: %f   Cost= %f\n", it.no, statagy2[it.no].at(j),it.c,statagy2[it.no].at(j)*it.c);   }
  }
    cout<<endl<<"Solution by Cost ="<<result<<" Taka"<<endl;

    cout<<"---->>>>"<<endl;
    sort(items, items+max_item, cmpcpu);

    result = solnPerUnitCost();

 for(int i=0; i<max_capacity; i++)
    {
        item it=items[i];
        for(int j = 0; j<statagy3[it.no].size(); j++)
    {
            printf("\nNumber of Item %d  vector: %f   Cost= %f\n", it.no, statagy3[it.no].at(j),it.c,statagy3[it.no].at(j)*it.c);    }
    }
    cout<<endl<<"Solution by Cost_per_unit ="<<result<<" Taka"<<endl;
}
