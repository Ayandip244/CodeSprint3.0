#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a; cin>>n;
  set<int> s;
  while(n--) cin>>a, s.insert(a);
  auto b=s.rbegin(); cout<<*(++b);
}
