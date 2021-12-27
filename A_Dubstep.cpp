#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string str;
    cin>>str;
    int chk=1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(!chk)
                cout<<" ";
            continue;
        }
        else
        {
            chk=0;
            cout<<str[i];
        }
    }
    
    return 0;
}