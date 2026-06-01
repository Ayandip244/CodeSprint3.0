#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m=0; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++) m=max(m,a[i]+a[n-1-i]);
  cout<<m;
}
