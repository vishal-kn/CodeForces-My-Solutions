#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> st;
    char ch;
    while(cin>>ch)
    {
        if(ch=='{' || ch=='}' || ch==',' || ch==' ')
            continue;
        st.insert(ch);
    }
        cout<<st.size();
	
    return 0;
}