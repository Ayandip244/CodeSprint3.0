#include<bits/stdc++.h>
using namespace std;
struct node{int v; node* next=nullptr;};
int main(){
  int n,m,x; cin>>n;
  vector<node> a(n);
  for(int i=0;i<n;i++){cin>>a[i].v;if(i) a[i-1].next=&a[i];}
  cin>>m;
  vector<node> b(m);
  for(int i=0;i<m;i++){cin>>b[i].v;if(i) b[i-1].next=&b[i];}
  cin>>x;
  
  node *hb=&b[0], *in=nullptr;
  if(x!=-1){
    for(int i=0;i<n;i++) if(a[i].v==x) in=&a[i];
    for(int i=0;in && i<m;i++){
      if(b[i].v==x){
        i ? (b[i-1].next=in) : (hb=in);
        break;
      }
    }
  }
  node *p1=&a[0], *p2=hb;
  while(p1!=p2){
    p1 = p1 ? p1->next : hb;
    p2 = p2 ? p2->next : &a[0];
  }
  cout<<(p1 ? p1->v : -1)<<"\n";
  return 0;
}
