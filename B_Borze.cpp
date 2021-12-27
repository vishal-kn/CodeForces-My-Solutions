#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    string str;
    cin>>str;
    for(int i=0;i<str.size();)
    {
        char st=str[i];
        char st2=str[i+1];
        string str2;
        str2+=st;
        str2+=st2;

        if(str2=="-.")
        {
            cout<<"1";
            i+=2;
        }
        else if(str2=="--")
        {
            cout<<"2";
            i+=2;
        }
        else
        {
            cout<<"0";
            i++;
        }
        
    }
    return 0;

 }