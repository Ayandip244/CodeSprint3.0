#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0||a[i]>100) return cout<<"Invalid Marks !\nMarks should be between 0 - 100\nRun the program again with valid marks.",0;
  }
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(a[i]==a[j]) return cout<<"YES",0;
  cout<<"NO";
}
