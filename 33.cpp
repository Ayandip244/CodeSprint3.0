#include <iostream>
using namespace std;
struct node{int info; node* next;};
int main(){
  int n,v; cin>>n;
  node* head=nullptr, **tail=&head;
  while(n-- && cin>>v){
    *tail=new node{v,nullptr};
    tail=&((*tail)->next);
  }
  node *prev=nullptr, *curr=head, *next=nullptr;
  while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  while(prev){
    cout<<prev->info<<" ";
    prev=prev->next;
  }
  return 0;
}
