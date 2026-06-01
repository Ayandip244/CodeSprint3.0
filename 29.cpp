#include<bits/stdc++.h>
using namespace std;
int countVowels(string s){
  int v=0;
  for(char c:s) if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') v++;
  return v;
}
bool comp(const string& a, const string& b){
  int va=countVowels(a), vb=countVowels(b);
  if(va != vb) return va>vb;
  if(a.length() != b.length()) return a.length()<b.length();
  return a<b;
}
int main(){
  int n; cin>>n;
  vector<string> s(n);
  for(int i=0;i<n;i++) cin>>s[i];
  sort(s.begin(),s.end(),comp);
  for(int i=0;i<n;i++) cout<<s[i]<<"\n";
  return 0;
}
