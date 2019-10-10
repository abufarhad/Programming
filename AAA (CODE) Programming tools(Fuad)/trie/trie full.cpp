#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool endmark;
    node* next[26+1];
    node()
    {
        endmark=false;
        for(int i=0;i<26;i++)
            next[i]=NULL;
    }

}*root;


void insert_data(char* str,int len)
{
    node* curr=root;

    for(int i=0;i<len;i++){
        int id=str[i]-'a';

        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];

    }
    curr->endmark=true;
}

bool search_data(char* str,int len)
{
    node* curr =root;

    for(int i=0;i<len;i++){
        int id=str[i]='0';
        if(curr->next[id]==NULL)
            return false;
        curr=curr->next[id];
    }
    return curr->endmark;

}
void del(node* curr)
{
    for(int i=0;i<26;i++){
        if(curr->next[i])
            del(curr->next[i]);
    }

    delete(curr);
}


int main()
{
    root = new node();
    int n;
    cout<<"enter number of words u want to insert : ";
    cin>>n;


    char str[100];
    for(int i=0;i<n;i++)
    {
        cout<<"enter word : ";
        cin>>str;

        insert_data(str,strlen(str));
    }

    char sea[100];

    while(1){
        cout<<" search : ";
       cin>>sea;
       if(search_data(sea,strlen(sea)))
            cout<<"-----------found---------------"<<endl;
       else
            cout<<"-----------not found------------"<<endl;

    }
    del(root);



    return 0;
}
