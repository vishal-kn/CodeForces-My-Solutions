#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
    int n;
    cin>>n;
    int mag[n];
    for(int i=0;i<n;i++)
        cin>>mag[i];
    int max=0;
    int clk=-1;
    for(int i=0;i<n;i++)
    {
        if(mag[i]!=mag[i+1])
            max++;
    }
    cout<<max;
    return 0;
 }