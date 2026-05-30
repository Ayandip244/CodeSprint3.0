#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,j,i=0,s=0; cin>>n;
  vector<int> a(n);
  while(i<n) cin>>a[i++];
  for(int i=1;i<n;i++){
    int k=a[j=i];
    while(j>0 && a[j-1]>k)
      a[j]=a[j-1],j--,s++;
    a[j]=k;
  }
  for(int x:a) cout<<x<<" ";
  cout<<"\n"<<s;
}
