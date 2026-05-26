#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,r,k,v,l=0; cin>>n;
  vector<int> a(n), ans(n);
  for(int &x : a) cin>>x;
  for(r=k=n-1;l<=r;){
    v=abs(a[l])>abs(a[r]) ? a[l++] : a[r--];
    ans[k--]=v*v;
  }
  for(int x:ans) cout<<x<<" ";
}
