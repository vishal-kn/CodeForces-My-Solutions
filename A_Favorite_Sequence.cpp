
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	  int tc,n,l,r;
	  cin>>tc;
    while(tc--)
    {
        cin>>n;
        vector<int> arr(n);
         vector <int>org(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int l=0,r=n-1;l<r;l++,r--)
        {
           cout<<" "<<arr[l]<<" "<<arr[r];
            
        }
        if(n%2!=0)
        cout<<" "<<arr[(n-1)/2]<<endl;
        else
        cout<<endl;
      
       

    
    }
    return 0;
}
