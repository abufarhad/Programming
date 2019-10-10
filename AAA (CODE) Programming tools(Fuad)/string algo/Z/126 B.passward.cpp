

#include<bits/stdc++.h>
using namespace std ;

// for Z - algorithm
#define MX 1000010  // str lenght
int z[MX] ;
string s ;

int main()
{
    cin >> s ;
    int n = s.size() ;
    if( n < 3 )
    {
        cout << "Just a legend" << endl ;
        return 0 ;
    }

    /*
    Z - algorithm  O(n) :D

    z[i]  == length of the longest sub-string starting from i , which is also prefix  of s
    we consider, i =  1 to n-1 , because , z[0] = n ; technically speaking.

    we maintain a range [L,R] and update occasionally
    */

    int L = 0 , R = 0 ;
    for( int i = 1 ; i <= n-1 ; i++ ) //  from 1 , not 0 :)
    {
        //case : 1
        if( i > R )
        {
            L = R = i ; // both L and R ; so that R-L = 0 here ;
            while( R <= n-1 && s[R-L] == s[R] ) R++ ;

            z[i] = R-L , R-- ;
            // z[i] should be actually R-L+1 , but R is already 1 beshi
        }
        //case:  2
        else
        {
            int k = i - L ; // mane koyta mil ache alrady ; // s[i] ===== s[k] same obostha
                                                            // z[i] ===== z[k] boshabo kina check
                                                            // 2 (two) ta special sub-case check ekhon

            int rem = R-i+1 ;
            //sub-case: 1
            if( z[k] < rem ) z[i] = z[k] ;
            //sub-case: 2  [ updating [L,R] by making L = i and incrementing R from its prev value ]
            else
            {
                L = i ;
                while( R < n && s[R-L] == s[R] ) R++ ;
                z[i] = R-L , R-- ;

            }

        }



    }

    // end of Z-algorithm


    for(int i=0;i<n;i++)
        cout<<i<<" "<<z[i]<<endl;



    // Problem: 126B Password
    int max_Z_so_far = 0 , res = 0 ;
    for( int i = 1 ; i <= n-1 ; i++ )
    {
        if( z[i] == n-i )
        {
            cout<<"pos "<<i<<endl;
            if( max_Z_so_far >= n-i )
            {
                res = n-i ;
                break ;
            }
        }
        max_Z_so_far = max( z[i] , max_Z_so_far ) ;
    }

    if( res == 0 ) cout << "Just a legend" << endl ;
    else cout << s.substr(0,res) << endl ;
    return 0 ;
}
