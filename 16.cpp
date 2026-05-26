#include <iostream>
using namespace std;
int main(){
  int n,a,r=0;
  if(!(cin>>n)) return 0;
  while(n--){
    cin>>a;
    r ^= a;
  }
  if(r==0) cout<<"BALANCED"<<endl;
  else cout<<"UNBALANCED"<<endl;
  return 0;
}
