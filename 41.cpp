#include<bits/stdc++.h>
using namespace std;
struct node{int v;node *x, *d; node(int a):v(a),x(0),d(0){}};
struct cmp{bool operator()(node* a, node* b){return a->v>b->v;}};
int main(){
  int n,v; cin>>n; string s;getline(cin,s);
  node *head=0, *curr=0;
  while(n--){
    getline(cin,s); stringstream ss(s);
    node dummy(0), *t=&dummy;
    while(ss>>v) t=t->x=new node(v);
    if(dummy.x){
      if(!head) head=curr=dummy.x;
      else curr=curr->d=dummy.x;
    }
  }
  priority_queue<node*,vector<node*>,cmp> q;
  for(node* p=head;p;p=p->d) q.push(p);
  while(q.size()){
    node* c=q.top(); q.pop(); cout<<c->v<<" ";
    if(c->x) q.push(c->x);
  }
}
