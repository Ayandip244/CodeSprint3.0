#include<bits/stdc++.h>
using namespace std;
struct node{int val;node *prev, *next;};
int main(){
  int n,k,v; cin>>n>>k;
  node *head=new node{0,nullptr,nullptr}, *tail=head;
  cin>>head->val;
  for(int i=1;i<n;i++){
    cin>>v;
    tail=tail->next=new node{v,tail,nullptr};
  }
  if((k%=n)>0){
    tail->next=head;
    head->prev=tail;
    node *new_tail=head;
    for(int i=1;i<n-k;i++) new_tail=new_tail->next;
    head=new_tail->next;
    head->prev=new_tail->next=nullptr;
  }
  for(node *curr=head; curr; curr=curr->next)
    cout<<curr->val<<" ";
  return 0;
}
