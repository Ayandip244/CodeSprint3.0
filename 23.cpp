#include <bits/stdc++.h>
using namespace std;
int n,v[100005],l,m=2e9,a,b;
int main(){
  cin>>n;
  while(l<n) cin>>v[l++];
  sort(v,v+n);
  for(l=0,n--;l<n;v[l]+v[n]<0?l++:n--)
    if(abs(v[l]+v[n])<=abs(m)) m=v[l]+v[n],a=v[l],b=v[n];
  cout<<a<<" "<<b;
}
