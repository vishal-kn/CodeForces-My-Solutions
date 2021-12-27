#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n,m;
cin>>n>>m;
vector<int> v(m+2);
int i,ans=10000,mini,maxi;
for(i=0;i<m;i++)cin>>v[i];
sort(&v[0],&v[m]);
for(i=0;i<=m-n;i++){
    maxi=*max_element(&v[i],&v[i+n]);
    mini=*min_element(&v[i],&v[i+n]);
    ans=min(maxi-mini,ans);
}
cout<<ans;
return 0;
}