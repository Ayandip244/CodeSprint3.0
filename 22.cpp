#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<pair<string, int>> a(n);
  for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j].second>a[j+1].second) swap(a[j],a[j+1]);
    }
  }
  for(int i=0;i<n;i++) cout<<a[i].first<<" "<<a[i].second<<"\n";
  return 0;
}
