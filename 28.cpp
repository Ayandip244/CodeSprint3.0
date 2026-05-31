#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k,s=0; cin>>n;
  vector<int> a(n);
  for(int& x:a) cin>>x;
  for(int i=0;i<n-1;i++){
    k=i;
    for(int j=i+1;j<n;j++) if(a[j]<a[k]) k=j;
    if(k!=i) swap(a[i],a[k]),s++;
  }
  for(int x:a) cout<<x<<" ";
  cout<<"\n"<<s;
}
