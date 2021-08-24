#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,ans;
    cin>>n;
    int a[n];
    ans=0,c=0;
    for(i=i;i<n;i++)
    {
       cin>>a[i];
        
        if(a[i]<a[i-1])
            c=1;
        else 
            c++;
        ans=max(ans,c);
    }
    cout<<ans<<endl;
}