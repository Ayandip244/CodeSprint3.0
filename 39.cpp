#include<bits/stdc++.h>
using namespace std;
int main(){
  int c,q,k,v; string o;
  while(cin>>o && !isdigit(o.back())); c=stoi(o);
  while(cin>>o && !isdigit(o.back())); q=stoi(o);
  list<pair<int,int>> l;
  unordered_map<int,list<pair<int,int>>::iterator> m;
  while(q--){
    cin>>o>>k;
    if(o[0]=='P') cin>>v;
    if(m.count(k)){
      l.splice(l.begin(),l,m[k]);
      if(o[0]=='P') m[k]->second=v;
      else cout<<m[k]->second<<"\n";
    }else{
      if(o[0]=='P'){
        if(l.size()==c) m.erase(l.back().first), l.pop_back();
        l.push_front({k,v}), m[k]=l.begin();
      }else cout<<"-1\n";
    }
  }
}
