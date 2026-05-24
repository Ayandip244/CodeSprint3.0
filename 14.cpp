#include <iostream>
#include <string>
using namespace std;
int main(){
  string s; cin>>s;
  int n=s.size(),c=1;
  for(int i=0;i<n;i++){
    if(s[i]==s[i+1]) c++;
    else cout<<s[i]<<c,c=1;
  }
}
