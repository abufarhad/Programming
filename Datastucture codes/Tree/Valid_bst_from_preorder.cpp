
int Solution::solve(vector<int> &a)
{
    stack<int>s;

    int n=a.size() , root=INT_MIN;
    for(int i=0; i<n; i++)
    {
        while(s.size()  and a[i] >s.top() )
        {
            root=s.top();
            s.pop();
        }

        if(root> a[i]  )return 0;

        s.push(a[i]);
    }

    return 1;
}


