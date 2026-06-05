#include<bits/stdc++.h>
using namespace std;
struct node{int id; node* next;};
int main(){
  int n,k,id; cin>>n;
  node *head=new node, *prev=head;
  cin>>head->id;
  for(int i=1;i<n;i++){
    cin>>id;
    prev=prev->next=new node{id,nullptr};
  }
  prev->next=head;
  cin>>k;
  node* curr=head;
  while(n>1){
    for(int i=0;i<(k-1)%n;i++)
      prev=curr,curr=curr->next;
    prev->next=curr->next;
    delete curr;
    curr=prev->next;
    n--;
  }
  cout<<curr->id<<"\n";
  return 0;
}
