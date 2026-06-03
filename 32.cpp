#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,x,s=0,z=0; cin>>n>>k>>x;
  vector<int> a(n);
  for(int &v:a) cin>>v;
  for(int i=0;i<n;i++){
    s += a[i];
    z += !a[i];
    if(i>=k){
      s -= a[i-k];
      z -= !a[i-k];
    }
    if(i>=k-1 && s>=x && !z) return cout<<"YES",0;
  }
  cout<<"NO";
}
