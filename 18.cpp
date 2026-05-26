#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; if(!(cin>>n)) return 0;
  string ans,s; cin>>ans;
  while(--n && cin>>s){
    while(!ans.empty() && s.find(ans) != 0) ans.pop_back();
  }
  cout<<ans<<"\n";
}
