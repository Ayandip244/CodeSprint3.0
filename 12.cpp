#include <iostream>
using namespace std;
int main(){
  int n,v,m=0,s=0; cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>v;
      if(i==j) m+=v;
      if(i+j==n-1) s+=v;
    }
  }
  cout<<(m==s ? "YES" : "NO")<<"\n";
  return 0;
}
