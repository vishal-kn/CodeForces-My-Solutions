#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int r,c,lv=0;
    cin>>r>>c;
    char s,d;
    s='#',d='.';
    for(int i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
        for(int j=1;j<=c;j++)
            cout<<s;
        }
        else
        {
            if(lv==0)
            {
                lv=1;
            for(int k=1;k<=c;k++)
            {
                if(k==c)
                    cout<<s;
                else
                cout<<d;  
            }
            }
            else
            {
                lv=0;
                for(int k=1;k<=c;k++)
            {
                if(k==1)
                    cout<<s;
                else
                cout<<d;  
            } 
            }
        }
        cout<<"\n";

    }
    return 0;
}