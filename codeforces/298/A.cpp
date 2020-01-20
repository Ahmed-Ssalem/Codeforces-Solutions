#include<bits/stdc++.h>
using namespace std;
int main()
{  
int n; cin>>n;  
string s; cin>>s;
int r =0, l=0 ;
int a=s.find("R")+1;
int b=s.find("L");
for(int i =0;i<s.size();++i){
  if(s[i]=='R') ++r;
  else if(s[i]=='L') ++l;
}
if(a !=0 && b !=-1) cout<<a<<" "<<b;
else if (a==0){
  a=b;
  int c= b+l;
  cout<<c<<" "<<a;
}
else if(b==-1){
  b=a+r; 
  cout<<a<<" "<<b;
}
}
