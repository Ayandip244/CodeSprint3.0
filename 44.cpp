#include<bits/stdc++.h>
using namespace std;
vector<int> a,t;
void ms(int l,int r){
  if(l>=r) return;
  int m=(l+r)/2,i=l,j=m+1,k=l;
  ms(l,m); ms(m+1,r);
  while(i<=m && j<=r) t[k++]=a[i]<=a[j]?a[i++]:a[j++];
  while(i<=m) t[k++]=a[i++];
  while(j<=r) t[k++]=a[j++];
  for(i=l;i<=r;i++) a[i]=t[i];
}
int main(){
  int n; cin>>n;
  a.resize(n); t.resize(n);
  for(int &x:a) cin>>x;
  ms(0,n-1);
  for(int x:a) cout<<x<<" ";
}
