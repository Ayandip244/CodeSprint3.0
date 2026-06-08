#include<iostream>
using namespace std;
int n,a[9][9],f=0;
void dfs(int r,int c,string s){
  if(r<0||c<0||r>=n||c>=n||!a[r][c]) return;
  if(r==n-1 && c==n-1){
    cout<<s<<"\n";
    f=-1;
    return;
  }
  a[r][c]=0;
  dfs(r+1,c,s+"D");
  dfs(r,c-1,s+"L");
  dfs(r,c+1,s+"R");
  dfs(r-1,c,s+"U");
  a[r][c]=1;
}
int main(){
  cin>>n;
  for(int i=0;i<n*n;i++) cin>>a[i/n][i%n];
  dfs(0,0,"");
  if(!f) cout<<-1;
  return 0;
}
