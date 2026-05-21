#include <bits/stdc++.h>
using namespace std;
int main(){
  string line,word;
  int v=0,c=0,w=0;
  getline(cin,line);
  stringstream ss(line);
  while(ss>>word){
    w++;
    for(char x : word){
      if(isalpha(x)){
        x=tolower(x);
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
        else c++;
      }
    }
  }
  cout<<"Total Vowels: "<<v<<"\n";
  cout<<"Total Consonants: "<<c<<"\n";
  cout<<"Total Words: "<<w<<"\n";
}
