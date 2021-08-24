//##########################   SOLUTION 1   ##############################
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

//##########################   SOLUTION 2   ##############################
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
