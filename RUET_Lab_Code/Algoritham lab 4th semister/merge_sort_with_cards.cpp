#include<bits/stdc++.h>
using namespace std;

#define SPADE 1
#define HEART 2
#define DIAMOND 3
#define CLUB 4

int counter = 0;

struct Card
{
    int cardNumber;
    char cardDeck;
};

Card cards[14];

map< pair<int,char>, bool> cardExists;

int getCardNo()
{
    int r = rand()%14 +1;

    if(r==1)
        return 2;
    else
        return r;
}

char getCardDeck()
{
    int r = rand()%4 +1;

    switch(r)
    {
        case SPADE:
            return 'S';
            break;
        case HEART:
            return 'H';
            break;
        case DIAMOND:
            return 'D';
            break;
        case CLUB:
            return 'C';
            break;
    }
}

bool compareCards(Card card1, Card card2)
{
    if(card1.cardNumber==card2.cardNumber)
    {
        return card1.cardDeck<card2.cardDeck;
    }
    else
    {
        return card1.cardNumber<=card2.cardNumber;
    }
}

void Merge(int p,int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;

    counter+=2;

    int i,j;

    Card L[n1+2],R[n2+2];

    counter+=2;

    for(i=1;i<=n1;i++)
    {
        L[i]=cards[p+i-1];
        counter++;
    }
    counter++;


    for(j=1;j<=n2;j++)
    {
        R[j]=cards[q+j];
        counter++;
    }
    counter++;


    L[n1+1].cardNumber=INT_MAX;
    R[n2+1].cardNumber=INT_MAX;

    i=1;
    j=1;

    counter+=4;

    for(int k=p;k<=r;k++)
    {
        counter++;
        if(compareCards(L[i],R[j]))
        {
            cards[k]=L[i];
            i++;
            counter+=2;
        }
        else
        {
            counter+=2;
            cards[k]=R[j];
            j++;
        }
    }
}

void MergeSort(int p,int r)
{
    counter++;
    if(p<r)
    {
        //counter++;
        int q=floor((p+r)/2.0);
        //counter++;
        MergeSort(p,q);
        //counter++;
        MergeSort(q+1,r);
        //counter++;
        Merge(p,q,r);

        counter+=4;
    }
}

int main()
{
    srand(time(NULL));

    for(int i=1;i<=13;i++)
    {
        cards[i].cardNumber = getCardNo();
        cards[i].cardDeck = getCardDeck();

        if(cardExists[make_pair(cards[i].cardNumber, cards[i].cardDeck)])
        {
            while(1)
            {
                cards[i].cardNumber = getCardNo();
                cards[i].cardDeck = getCardDeck();

                if(!cardExists[make_pair(cards[i].cardNumber, cards[i].cardDeck)])
                    break;
            }
        }

        cardExists[make_pair(cards[i].cardNumber, cards[i].cardDeck)] = true;
    }

    cout<<"Before Sorting"<<endl;
    for(int i=1;i<=13;i++)
    {
        cout<<cards[i].cardNumber<<" "<<cards[i].cardDeck<<endl;
    }
    MergeSort(1,13);

    cout<<endl<<"After Sorting"<<endl;

    for(int i=1;i<=13;i++)
    {
        cout<<cards[i].cardNumber<<" "<<cards[i].cardDeck<<endl;
    }

    cout<<"Step count: "<<counter<<endl;

    return 0;
}
