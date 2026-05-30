#include <bits/stdc++.h>
using namespace std;
int main(){
  string l; getline(cin,l);
  stringstream ss(l);
  vector<string> v;
  while(ss>>l) v.push_back(l);
  for(int i=v.size(); i--;)
    cout<<v[i]<<(i ? " " : "");
}
