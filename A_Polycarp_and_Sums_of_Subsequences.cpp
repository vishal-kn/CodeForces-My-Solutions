#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cvv:
    int vec[7];
    int size=7;
    for(int i=0;i<size;i++)
    {
       cin>>vec[i];
    }
    int max=vec[size-1];
    for(int a=0;a<size-1;a++)
    {
        for(int b=a+1;b<size-1;b++)
        {
            for(int c=b+1;c<size-1;c++)
            {
                if(vec[a]+vec[b]+vec[c]==max)
                    {
                        cout<<vec[a]<<" "<<vec[b]<<" "<<vec[c]<<"\n";
                        break;
                    }
            }
        }
    }
    }
    return 0;
}