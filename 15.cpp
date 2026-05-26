#include <iostream>
using namespace std;
int main(){
  int n,x;
  if(!(cin>>n)) return 0;
  while(n--){
    cin>>x;
    cout<<(__builtin_popcount(x)&1?"ANSWER\n":"SAFE\n");
  }
}
