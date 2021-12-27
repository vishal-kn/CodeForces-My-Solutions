
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,i,j,temp,ans;
   cin>>t;
   while(t--)
   {
      
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;
  vector<int> b = a;
  sort(b.begin(), b.end());
  if (a == b) {
    cout << 0 << '\n';
      return 0;
  }
  int cur = 0;
  while (1) 
  {
    cur++;
    if (cur % 2!=0)
     {
      for (int i = 0; i + 1 < n; i += 2)
       {
        if (a[i] > a[i + 1])
          swap(a[i], a[i + 1]);
        }
    }

     else
      {
      for (int i = 1; i + 1 < n; i += 2) 
        {
        if (a[i] > a[i + 1]) 
          swap(a[i], a[i + 1]);
        }
    }
    if (a == b)
     break;
  }
 
  cout << cur << '\n'; 
}
  return 0; 
}