#include<bits/stdc++.h>
using namespace std;
int main()
{    
string s ;  cin>>s ; 
int start = 0 , move = 0 ;
for (int i = 0 ; i < s.size(); ++i ){
  int pos = s[i]-97 ;
  int dis = abs( start - pos ) ;
  if( dis < 13 ) move += dis ;
  else move += 26-dis ;
  start = pos ;
}
cout<<move ;
}