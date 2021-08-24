#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> vect(n);
    vector<int> cpy(n);
    for(auto &i:vect)
    {
        cin>>i;  
    }
    cpy=vect;
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++)
    {
        if(cpy[i]!=vect[1])
        {
            cout<<i+1<<endl;
        }
    }
}

}