#include <iostream>
using namespace std;
int main(){
  int n,s,a=-1;
  long long x,sum=0;
  cin>>n>>x;
  for(int i=0;i<n;i++){
    cin>>s;
    sum+=s;
    if(sum>x && a==-1) a=i;
  }
  cout<<a<<"\n";
  return 0;
}
