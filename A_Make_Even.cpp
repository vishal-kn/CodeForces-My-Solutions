#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string n;
    cin>>n;
    int ptr=0;
    //already even check
    if((n[n.size()-1])%2==0)
        {
            cout<<"0\n";
            continue;
        }
    if((n[0])%2==0)
        {
            cout<<"1\n";
            continue;
        }
    for(int i=1;i<n.size();i++)
    {
        if((n[i])%2==0)
        {
            ptr++;
        }
        
    }
       if(ptr>0)
        cout<<"2\n";
        else
        cout<<"-1\n"; 

        
    }
    return 0;
}