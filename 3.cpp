#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,s=0,c=0; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0 || a[i]>100) return cout<<"Invalid inputs! Scores must be between 0 and 100.",0;
    s+=a[i];
  }
  double avg = (double)s/n;
  for(int i=0;i<n;i++) c+=a[i]>avg;
  cout<<c;
}
