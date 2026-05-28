#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k; cin>>n;
  vector<int> a(n);
  for(auto &x:a) cin>>x;
  cin>>k;
  sort(a.begin(),a.end());
  for(int i=0;i<n-2;i++){
    int l=i+1, r=n-1;
    while(l<r){
      int s = a[i]+a[l]+a[r];
      if(s==k) return cout<<"YES",0;
      else if(s<k) l++;
      else r--;
    }
  }
  cout<<"NO";
}
