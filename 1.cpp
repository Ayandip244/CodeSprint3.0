#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,x,c=0; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>x, x ? a[c++]=x : 0;
  while(c<n) a[c++]=0;
  for(int x:a) cout<<x<<" ";
}
