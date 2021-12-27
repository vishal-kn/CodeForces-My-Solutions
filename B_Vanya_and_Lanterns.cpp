#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int v[n];
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v,v+n);
        double d=0.0000000000;
        for(int i=0,j=1;j<n;i++,j++)
        {
            if(v[j]-v[i]>d)
                d=v[j]-v[i]; 
        }
        cout<<d;
        cout<<d/2.0000000000<<endl;
}