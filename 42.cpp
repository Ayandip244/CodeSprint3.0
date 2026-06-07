#include<bits/stdc++.h>
using namespace std;
int m[45];
int f(int n){
  return n<2 ? n : m[n] ? m[n] : (m[n] = f(n-1)+f(n-2));
}
int main(){
  int n; cin>>n;
  cout<<f(n);
}
