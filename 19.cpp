#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,f=0; cin>>n;
  vector<string> v(n);
  for(auto &s:v) cin>>s;
  string p; cin>>p;
  sort(v.begin(),v.end());
  for(auto &s:v){
    if(!s.find(p)){
      cout<<s<<"\n";
      f=1;
    }
  }
  if(!f) cout<<-1;
}
