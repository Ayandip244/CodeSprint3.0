#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  if(n<1 || n>50) return cout<<"Alert: N must be between 1 and 50!\n", 1;
  int g[50][50];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>g[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(g[i][j])
        cout<<"O ";
      else if((i>0 && g[i-1][j]) || (i<n-1 && g[i+1][j]) || (j>0 && g[i][j-1]) || (j<n-1 && g[i][j+1]))
        cout<<"X ";
      else
        cout<<"S ";
    }
    cout<<"\n";
  }
  return 0;
}
