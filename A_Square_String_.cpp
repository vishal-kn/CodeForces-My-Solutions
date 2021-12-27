#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
    cvv:
	while(tc--)
	{
        string str;
        cin>>str;
        int n=str.size(),chk=0;
        if(n%2)
        {
            cout<<"NO\n";
            
        }
        else
        {
            int k=n/2;
            for(int i=0;i<n/2;i++)
            {
                if(str[i]!=str[i+n/2])
                {
                    chk++;
                    break;
                } 
            }
            if(chk)
            cout<<"NO\n";
            else
            cout<<"YES\n";

        }
	}
	
    return 0;
}