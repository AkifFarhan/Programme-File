#include<bits/stdc++.h>
using namespace std;

bool decrease(pair<int,int>a,pair<int,int>b)
{
    return a.first>b.first;
}

int main()
{
   int n,i,k,ans;
   cin>>n>>k;
   pair<int,int>a[n];
   for(i=0;i<n;i++)
      {
          cin>>a[i].first>>a[i].second;
         // a[i].first*=-1;
      }
     sort(a, a+n,decrease);
    ans=count(a,a+n,a[k-1]);
    cout<<ans;
    return 0;
}
