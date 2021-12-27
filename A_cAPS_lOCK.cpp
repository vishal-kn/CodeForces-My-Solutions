#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int countup=0,countlw=0;
    cin>>str;
    char c=str[0];
    for(int i=0;i<str.length();++i)
    {
        if(isupper(str[i])==true)
           countup++;
        else
            countlw++;
    }
    if(countup==str.length())
    {
        for(int i=0;i<str.length();++i)
        str[i]=tolower(str[i]);
    }
    else if(countlw==1 && islower(str[0])==true && isupper(str[1])==true)
    {
        for(int i=0;i<str.length();++i)
        {

            if(isupper(str[i])==true)
                str[i]=tolower(str[i]);
            else
                str[i]=toupper(str[i]);
        }
    }
    cout<<str<<endl;



    return 0;
}