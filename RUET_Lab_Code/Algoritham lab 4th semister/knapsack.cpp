#include<bits/stdc++.h>
using namespace std;

#define MAX_CAPACITY 15
#define MAX_ITEM 5

map<int, vector<double> > sol1;
map<int, vector<double> > sol2;
map<int, vector<double> > sol3;

struct Item
{
    double w;
    double c;

    int order;
};

Item items[MAX_ITEM];

bool cmpw(Item a, Item b)
{
    if(a.w==b.w)
        return a.c<=b.c;

    return a.w>b.w;
}

bool cmpc(Item a, Item b)
{
    if(a.c==b.c)
        return a.w>=b.w;

    return a.c<b.c;
}

bool cmpcpu(Item a, Item b)
{
    double c1 = a.c/a.w;
    double c2= b.c/b.w;

    return c1<=c2;
}

double solnWRTWeight()
{
    double cost = 0;
    double available_capacity = 15.0;

    for(int i=0;i<MAX_ITEM;i++)
    {
        Item it = items[i];

        if(available_capacity<=0)
            break;
        if(it.w>available_capacity)
        {
           /// cout<<"it.c  "<<it.c<<" "<<"it.w  "<<it.w<<endl;
            cost+= (it.c*available_capacity)/it.w;

          ///  cout<<"cost  "<<cost<<endl;
          ///   cout<<"Aviable capacity  "<<available_capacity/it.w<<endl;

            sol1[it.order].push_back(available_capacity/it.w);

            available_capacity = 0;
        }
        else
        {
            available_capacity -= it.w;

            sol1[it.order].push_back(1.0);

            cost+=it.c;
        }
    }

    return cost;
}

double solnWRTCost()
{
    double cost = 0;
    double available_capacity = 15.0;

    for(int i=0;i<MAX_ITEM;i++)
    {
        Item it = items[i];

        if(available_capacity<=0)
            break;
        if(it.w>available_capacity)
        {
            cost+= (it.c*available_capacity)/it.w;

            sol2[it.order].push_back(available_capacity/it.w);

            available_capacity = 0;
        }
        else
        {
            available_capacity -= it.w;

            sol2[it.order].push_back(1.0);

            cost+=it.c;
        }

    }

    return cost;
}

double solnPerUnitCost()
{
    double cost = 0;
    double available_capacity = 15.0;

    for(int i=0;i<MAX_ITEM;i++)
    {
        Item it = items[i];

        if(available_capacity<=0)
            break;
        if(it.w>available_capacity)
        {
            cost+= (it.c*available_capacity)/it.w;

            sol3[it.order].push_back(available_capacity/it.w);

            available_capacity = 0;
        }
        else
        {
            available_capacity -= it.w;

            sol3[it.order].push_back(1.0);

            cost+=it.c;
        }
    }

    return cost;
}

int main()
{
    srand(time(NULL));

    for(int i=0;i<MAX_ITEM;i++)
    {
        items[i].c = rand()%30 + 20;
        items[i].w = rand()% 15 + 1;

        //cin>>items[i].c>>items[i].w;

        items[i].order = i+1;
    cout<<"Item "<<items[i].order<<"---> "<<"Cost: "<<items[i].c<<" "<<"Weight: "<<items[i].w<<endl;;

        }

    cout<<"------------------------------------------------------------------"<<endl;

    sort(items, items+MAX_ITEM, cmpw);


    double ans = solnWRTWeight();

    for(int i=0;i<MAX_CAPACITY;i++)
    {
        Item it = items[i];

        for(int j = 0; j<sol1[it.order].size();j++)
        {
            printf("\nItem %d  Fraction: %f   Cost=%f*%f = %f\n", it.order, sol1[it.order].at(j),it.c,sol1[it.order].at(j),sol1[it.order].at(j)*it.c);
        }
    }

    cout<<"Solution with respect to weight "<<ans<<" Taka"<<endl;

    cout<<"------------------------------------------------------------------"<<endl;

    sort(items, items+MAX_ITEM, cmpc);

    ans  = solnWRTCost();

    for(int i=0;i<MAX_CAPACITY;i++)
    {
        Item it = items[i];

        for(int j = 0; j<sol2[it.order].size();j++)
        {
            printf("\nItem %d  Fraction: %f   Cost=%f*%f = %f\n", it.order, sol2[it.order].at(j),it.c,sol2[it.order].at(j),sol2[it.order].at(j)*it.c);
            //printf("\nItem %d  Fraction: %f\n", it.order, sol2[it.order].at(j));
        }
    }

    cout<<"Solution with respect to cost "<<ans<<" Taka"<<endl;

    cout<<"------------------------------------------------------------------"<<endl;

    sort(items, items+MAX_ITEM, cmpcpu);

    ans = solnPerUnitCost();

    for(int i=0;i<MAX_CAPACITY;i++)
    {
        Item it = items[i];

        for(int j = 0; j<sol3[it.order].size();j++)
        {
            printf("\nItem %d  Fraction: %f   Cost=%f*%f = %f\n", it.order, sol3[it.order].at(j),it.c,sol3[it.order].at(j),sol3[it.order].at(j)*it.c);
           // printf("\nItem %d  Fraction: %f\n", it.order, sol3[it.order].at(j));
        }
    }

    cout<<"Solution with respect to cost per unit "<<ans<<" Taka"<<endl;


    cout<<"------------------------------------------------------------------"<<endl;

    return 0;
}
