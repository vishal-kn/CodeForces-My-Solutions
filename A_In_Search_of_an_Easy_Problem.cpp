#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int clk=0;
    for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                clk=1;
        }
        if(clk!=0)
            cout<<"HARD";
        else
            cout<<"EASY";
        return 0;
}