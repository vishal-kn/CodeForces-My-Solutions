#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
         int oddidx = 1;
        int evenidx = 0;
    while(1)
    {
        while (evenidx < n && arr[evenidx]%2==0)
            evenidx += 2;
        while (oddidx<n && arr[oddidx]%2==1)
            oddidx += 2; 
        if (evenidx<n && oddidx<n)
            swap (arr[evenidx],arr[oddidx]);  
        else
            break;
    }
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=(arr[i]+i+1)%2;
    }
    cout<<sum<<"\n";
    }
    return 0;
}