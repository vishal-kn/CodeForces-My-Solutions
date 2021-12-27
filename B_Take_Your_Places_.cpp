
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,tc,i,j,count;
   cin>>tc;
   while(tc--)
   {   
  cin>> n;
  int a[n];
  for(int i=0;i<n;++i)
    cin >> a[i];
    count=0;
    for(i=0,j=1;j<n;i++,j++)
      {
          if(count>=n)
          break;
          if(a[i]==a[j])
          {
              continue;
          }
          else
          {
                  swap(a[i],a[j]);
                  count++;
                  i=0,j=1;
          } 
             
       }
 if(count==0)
      cout<<"-1"<<"\n";
      else
      cout << count <<"\n"; 
}
 return 0; 
}