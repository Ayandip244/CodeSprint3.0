#include <bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  int n=s.size(),st=0,mx=0,l,r;
  for(int i=0;i<n*2-1;i++){
    l=i/2;
    r=l+i%2;
    while(l>=0&&r<n&&s[l]==s[r]) l--,r++;
    if(r-l-1>mx) mx=r-l-1,st=l+1;
  }
  cout<<s.substr(st,mx);
}
