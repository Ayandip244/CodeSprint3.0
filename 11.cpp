#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
  string s; cin>>s;
  int u=0,l=0,d=0;
  for(char c:s) u|=isupper(c), l|=islower(c), d|=isdigit(c);
  cout<<(u && l && d ? "STRONG" : "WEAK")<<"\n";
  return 0;
}
