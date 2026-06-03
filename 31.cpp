#include<bits/stdc++.h>
using namespace std;
int main(){
  string j,s; cin>>j>>s;
  unordered_set<char> h(j.begin(),j.end());
  int c=0;
  for(char x:s) c+=h.count(x);
  cout<<c;
}
