

vector<bool>visited(1000007,false);
vector<ll int >data;
vector<ll int >info;
ll int cmsum[10000007];


ll int   kmp(string & text, string & pattern){

    ll int suff[100000];

    int i=1;
    int j=0;
    int sz=pattern.size();
    while(i<sz){
            //cout<<i<<endl;


        if(pattern[i]==pattern[j]){
                suff[i]=j+1;
            i++;
            j++;
        }
        else{




if(j==0){suff[i]=0;  i++;}
else{
j=suff[j-1];
}

        }


    }





j=0;
int c=0;
for(int i=0;i<text.size();){



if(text[i]==pattern[j]){


    i++;
    j++;
}
else{

    if(j==0){
       i++;}
       else{
j=suff[j-1];

       }

}
if(j==sz){c++; i-=j; i++;j=0;}



}

return c;

}



