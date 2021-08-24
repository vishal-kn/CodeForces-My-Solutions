#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,mx,total,cap;
    int a,b;
    cin>>n;
    cap=total=0;
    while(n--)
    {
    cin>>a>>b;
    total-=a;
    total+=b;
    cap=max(total,cap);

}
cout<<cap;

    return 0;
}