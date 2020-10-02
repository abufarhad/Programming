ll solve( vector <ll > &v )
{
    ll ans=0  , l_mx=-inf , g_mx=-inf;

    fr( i , v.size())
    {
        l_mx=max(v[i]  , v[i]+l_mx );
        g_mx=max(g_mx  , l_mx );
    }

    return g_mx;
}

mx={0ll , solve( v )};
