#include <iostream>
#include <string>
using namespace std;
int f[26],i;
int main(){
  string a,b; cin>>a>>b;
  if(a.size() != b.size()) return cout<<"NO",0;
  for(;i<a.size();i++) f[a[i]-'a']++, f[b[i]-'a']--;
  for(int x:f) if(x) return cout<<"NO",0;
  cout<<"YES";
}
