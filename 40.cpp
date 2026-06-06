#include<bits/stdc++.h>
using namespace std;
struct node{int v; node* next;};
node* f(node* a, node* b){return (node*)((uintptr_t)a^(uintptr_t)b);}
int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  node *h=0, *t=0, *c, *p=0, *nx;
  for(int i=0;i<n;i++){
    c=new node{a[i],0};
    if(!h) h=t=c;
    else c->next=f(t,0), t->next=f(t->next,c), t=c;
  }
  c=h; p=nullptr;
  while(c){
    cout<<c->v<<" ";
    nx=f(p,c->next);
    p=c; c=nx;
  }
}
