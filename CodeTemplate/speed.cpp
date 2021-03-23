#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)              printf("%lld ",x)

ll sz;

void print_line(string s)
{
    /// for Left    // cout<<s<<endl;
    /// for Right   //std::cout << std::setw(sz) << s << std::endl; or use for loop for extra space first
    /// for Center  // cout << string((sz - s.size())/2, ' ') << s << endl;  or use for loop for space

    cout << string((sz - s.size())/2, ' ') << s << endl;
}

string left_align(string s)
{
    vector<string>v;
    string s1;

    fr(i , s.size())
    {
        if(s[i]==' ' )v.push_back(s1) , s1="";
        else s1+=s[i];
    }
    v.push_back(s1) ;


    //for(auto x: v)cout<<x<<endl;

    string line;


    for(auto word: v)
    {
        if( line.size()+ word.size()+1 > sz )
        {
            print_line(line );
            line.clear();
            line=word;
        }
        else
        {
            if(!line.empty())line+=" ";
            line.append(word);
        }
    }

    ///for left, right and center different
    //cout<<line<<endl;
     print_line(line );
}


int main()
{
    string text =
        "This small code sample will format a paragraph which "
        "is passed to the justify text function to fill the "
        "selected page with and insert breaks where necessary. "
        "It is working like the justify formatting in text "
        "processors.";


    cin>>sz;
    left_align(text);

}
