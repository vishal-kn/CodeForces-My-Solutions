#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,maxl,count,diff,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    maxl=count=0;
    for(i=0,j=0;j<n;)
    {
        cin>>a[i];
        if(a[j+1]<a[j])
        {
            j++;
            i=j;
            maxl=count;
            continue;
        }
        count++;
        j++;
        ans=max(count,maxl);
    }
    
    cout<<ans<<endl;
}