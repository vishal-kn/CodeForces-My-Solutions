#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,m,w=0;

     cin>>n>>m;
     int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=m)
                w++;
            else if(arr[i]<=m*2)
                w+=2;
            
        }
        cout<<w<<endl;

    return 0;

 }