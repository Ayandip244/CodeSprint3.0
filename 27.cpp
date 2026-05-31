#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,r,l=0,m=0; cin>>n;
  r=n-1;
  vector<int> h(n);
  for(int& x : h) cin>>x;
  while(l<r){
    m=max(m,min(h[l],h[r])*(r-l));
    h[l]<h[r] ? l++ : r--;
  }
  cout<<m;
}
