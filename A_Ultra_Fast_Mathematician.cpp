#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     string n,m;cin>>n>>m;
     string k;
     for(int i=0;i<n.size();++i)
     {
         if(n[i]!=m[i])
            k+='1';
        else
            k+='0';
     }
     cout<<k;


    return 0;

 }