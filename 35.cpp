#include<bits/stdc++.h>
using namespace std;
struct node{node* next=nullptr;};
int main(){
  int n,p,v; cin>>n;
  if(!n) return 0;
  vector<node> a(n);
  for(int i=0;i<n;i++) cin>>v;
  cin>>p;
  for(int i=0;i<n-1;i++) a[i].next=&a[i+1];
  if(p!=-1) a[n-1].next=&a[p];
  node *s=&a[0], *f=&a[0];
  while(f && f->next){
    s=s->next;
    f=f->next->next;
    if(s==f) return cout<<"YES",0;
  }
  cout<<"NO";
  return 0;
}
