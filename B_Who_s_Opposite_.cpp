#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query,a,b,c,n,ans,z;
    cin>>query;
    while(query--)
    {
        cin>>a>>b>>c;
        n=(abs(a-b))*2;
        z=abs(a-b);
        if(a>n || b>n || c>n)
        {
        cout<<"-1\n";
        continue;
        }
        else{
            ans=z+c;
            while(ans>n)
            ans-=n;
            cout<<ans<<"\n";
            
        }
        
    }
    return 0;

}