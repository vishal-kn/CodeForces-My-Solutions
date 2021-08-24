#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem=0,digit;
    cin>>n;
    if(n%4==0 || n%7==0)
    {
    cout<<"YES"<<endl;
    return 0;
    }
    else
    {
    while(n>0)
    {
        digit=n%10;
        if(digit!=4 && digit!=7)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        n/=10;
    }
    cout<<"YES"<<endl;

    
    }
    return 0;
} 