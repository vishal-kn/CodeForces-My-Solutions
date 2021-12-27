#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string word;
        word.clear();
        int n=0;cin>>n;
        cin.ignore(); 
        getline(cin,word);
        //Check for any missing bigram
        for(int i=0;i<word.size();i++)
        {
            if(word[i+1]!=word[i+3])
            {
                string str=word[i+1]+word[i+2];
                word.insert(i+1,str);
            }
            else

        }
    }
    return 0;
}