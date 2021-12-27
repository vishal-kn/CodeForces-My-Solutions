#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int fp,sp,count=0;
    cin>>fp>>sp;
    for(int i=1;i<=sp;++i) // !<<<Checking whether second number is prime>>>
    {
        
        if(sp%i==0)
            count++;
    }
    if(count>2)
            {
                cout<<"NO"<<"\n";
                return 0;
            }
        cvv:
        count=0;
        fp++;
        for(int i=1;i<=fp;++i)
        {
            
            if(fp%i==0)
                count++;
        }
        if(count!=2)
            goto cvv;
        if(fp==sp)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    return 0;

 }