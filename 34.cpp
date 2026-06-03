#include<iostream>
using namespace std;
struct node{int info; node* next;};
int main(){
  int n,k,v; cin>>n;
  node* head=nullptr, **tail=&head;
  for(int i=0;i<n && cin>>v;i++){
    *tail=new node{v,nullptr};
    tail=&((*tail)->next);
  }
  cin>>k;
  node **b=&head, *a=head;
  while(k--) a=a->next;
  while(a){
    b=&((*b)->next);
    a=a->next;
  }
  *b=(*b)->next;
  while(head){
    cout<<head->info<<" ";
    head=head->next;
  }
  return 0;
}
