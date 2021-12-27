#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int num;cin>>num;
    int ans;
    vector <char> vec;
    string nstr;
        cvv:
        vec.clear();
        num++;
        nstr=to_string(num);
        for(int i=0;i<nstr.size();++i)
            {
                for(int j=0;j<vec.size();++j)
                {
                    if(nstr[i]==vec[j])
                    goto cvv;
                }
                vec.push_back(nstr[i]);
            }
    for(auto x:vec)
        cout<<x;
    return 0;

 }