#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int query,n,count,last,ans;
    cin>>query;
    while (query--)
    {
        cin>>n;
        count=0,ans=0,last=0;
        for(int i=1;;i++)
        {
            
            last=i%10;
            if(i%3==0 || i%10==3)
            continue;
            if(--n==0)
            {
                cout<<i<<"\n";
                break;
            }

            
        }
    }
    
}