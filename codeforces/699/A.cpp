#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;  string s;  long long b=0, c=1000000001;
  cin>>a>>s;
  int arr[a];
  for(int i =0;i<a;i++){
    cin>>arr[i];
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='R'  &&  s[i+1]=='L') {
    b=(arr[i+1]-arr[i])/2; 
    if(b<c) c=b;
    }
  }
  if(c==1000000001) cout<<"-1";
  else cout<<c;
}


 