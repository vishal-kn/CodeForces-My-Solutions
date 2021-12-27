#include <bits/stdc++.h>
using namespace std;
#define ll long long 

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
    cin>>n;
    vector<int> vec;
    int lv;
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>lv;
        vec.push_back(lv);
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>lv;
        vec.push_back(lv);
    }
    sort(vec.begin(),vec.end());
    int count;
    for(int i = 0 ; i < p+q ; i++){
        if(vec[i] != vec[i+1]){
            count++;
        }
    }
    
    if(count==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}