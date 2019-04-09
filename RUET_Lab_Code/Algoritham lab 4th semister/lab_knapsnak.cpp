#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct info{
    int weight, cost,index;
    double cpu;
}products[8];

bool g2s(info a, info b)
{
    return b.weight<a.weight;
}

bool g2s_cpu(info a, info b)
{
    return b.cpu>a.cpu;
}

bool s2g(info a, info b)
{
    return b.cost>a.cost;
}

int main()
{
    FILE *input;
    int i, capacity = 15;
    double x[9], taken, totalCost = 0,wixi;

    input = fopen("input.txt", "r");

    for(i=0; fscanf(input, "%d%d",&products[i].weight,&products[i].cost)!=EOF ;i++)
    {
        products[i].index = i;
        products[i].cpu = (double)products[i].cost/(double)products[i].weight;
    }

    //according to cost
    sort(products,products+7,s2g);
    /*for(i=0;i<7;i++)
        cout<<products[i].weight<<" "<<products[i].cost<<" "<<products[i].cpu<<endl;
    */
    for(i=0;i<9;i++)
        x[i] = 0.0;
    capacity = 15;
    totalCost = 0.0;
    wixi = 0.0;
    i = 0;
    while(capacity)
    {
        if(products[i].weight<=capacity)
        {
            capacity-=products[i].weight;
            x[products[i].index] = 1;
            totalCost += products[i].cost;
            wixi += products[i].weight;
        }

        else if(products[i].weight>capacity)
        {
            taken  = (double)capacity/(double)products[i].weight;
            totalCost += (double)products[i].cost * taken;
            x[products[i].index] = (double)taken;
            capacity = 0;
            wixi += products[i].weight * taken;
        }
        i++;
    }

    cout<< "\tx[i]\t\t\twixi\tpixi\n";
    for(i=0;i<6;i++)
        cout<<x[i]<<", ";
    cout<<x[i]<<" ";
    cout<<"\t\t"<<wixi<<"\t"<<totalCost<<endl;

    //according to weight
    sort(products,products+7,g2s);
    /*for(i=0;i<7;i++)
        cout<<products[i].weight<<" "<<products[i].cost<<" "<<products[i].cpu<<endl;
    */
    for(i=0;i<9;i++)
        x[i] = 0.0;
    capacity = 15;
    totalCost = 0.0;
    wixi = 0.0;
    i = 0;
    while(capacity)
    {
        if(products[i].weight<=capacity)
        {
            capacity-=products[i].weight;
            x[products[i].index] = 1;
            totalCost += products[i].cost;
            wixi += products[i].weight;
        }

        else if(products[i].weight>capacity)
        {
            taken  = (double)capacity/(double)products[i].weight;
            totalCost += (double)products[i].cost * taken;
            x[products[i].index] = (double)taken;
            capacity = 0;
            wixi += products[i].weight * taken;
        }
        i++;
    }

    //cout<< "\tx[i]\t\t\twixi\tpixi\n";
    for(i=0;i<6;i++)
        cout<<x[i]<<", ";
    cout<<x[i]<<" ";
    cout<<"\t\t"<<wixi<<"\t"<<totalCost<<endl;

    //according to cost per unit
    sort(products,products+7,g2s_cpu);
    /*for(i=0;i<7;i++)
        cout<<products[i].weight<<" "<<products[i].cost<<" "<<products[i].cpu<<endl;
*/
    for(i=0;i<9;i++)
        x[i] = 0.0;
    capacity = 15;
    totalCost = 0.0;
    wixi = 0.0;
    i = 0;
    while(capacity)
    {
        if(products[i].weight<=capacity)
        {
            capacity-=products[i].weight;
            x[products[i].index] = 1;
            totalCost += products[i].cost;
            wixi += products[i].weight;
        }

        else if(products[i].weight>capacity)
        {
            taken  = (double)capacity/(double)products[i].weight;
            totalCost += (double)products[i].cost * taken;
            x[products[i].index] = (double)taken;
            capacity = 0;
            wixi += products[i].weight * taken;
        }
        i++;
    }

    //cout<< "\tx[i]\t\t\twixi\tpixi\n";
    for(i=0;i<6;i++)
        cout<<x[i]<<", ";
    cout<<x[i]<<" ";
    cout<<"\t\t"<<wixi<<"\t"<<totalCost<<endl;

    return 0;
}
