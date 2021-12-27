#include <bits/stdc++.h>
using namespace std;
 int main()
 {
   string str;
   cin>>str;
   int cap=0,sma=0;
    for(auto i:str)
        {
            if(int(i)<=90 && int(i)>=65 )
                cap++;
            else
                sma++;
        }
        if(cap>sma)
       transform(str.begin(), str.end(), str.begin(), ::toupper);
        else
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        cout<<str;
    return 0;

 }