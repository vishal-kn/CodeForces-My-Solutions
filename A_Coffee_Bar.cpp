#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,t,j;
    cin>>n>>t;
    char s[n],temp;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
    
        while(t--)
        {
            for(j=0;j<n;j++)
            {
            if(s[j] =='B' && s[j+1]=='G')
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                    j++;
                    continue;
                }
            }
            
        }
         for(int i=0;i<n;i++)
        {
            cout<<s[i];
        }
}