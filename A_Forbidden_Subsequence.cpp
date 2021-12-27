#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str,per;
        str.clear();
        per.clear();
        cin>>str;
        cin>>per;
        int count_a = count(str.begin(), str.end(), 'a');
        int count_b = count(str.begin(), str.end(), 'b');
        int count_c = count(str.begin(), str.end(), 'c');
        str.erase(remove(str.begin(), str.end(), 'a'),str.end());
        str.erase(remove(str.begin(), str.end(), 'b'),str.end());
        str.erase(remove(str.begin(), str.end(), 'c'),str.end());
        
        vector<char> vec;
    if((per.compare("abc"))==0 && count_a!=0 &&count_c!=0 && count_b!=0)
        {
            while(count_a--)
            vec.push_back('a');
            while(count_c--)
            vec.push_back('c');
            while(count_b--)
            vec.push_back('b');
        }
    else
    {
            while(count_a--)
            vec.push_back('a');
            while(count_b--)
            vec.push_back('b');
            while(count_c--)
            vec.push_back('c');
    }
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
        {
            char ch=str[i];
            vec.push_back(ch);
        }
   
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i];
        }
        cout<<"\n";
    }
    return 0;
}