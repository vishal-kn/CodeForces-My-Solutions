#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch;
   set<char> set;

     for(int i=0;i<n;i++)
     {
         cin>>ch;
         if(isupper(ch))
         ch=tolower(ch);
            set.insert(ch);
     }
     if(set.size()==26)
     cout<<"YES"<<endl;

     else
     cout<<"NO"<<endl;
         return 0;
}