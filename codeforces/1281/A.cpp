#include<bits/stdc++.h>
using namespace std;
int main()
{    
  int x  ;  cin>>x;
  string s ;
  while( x-- ){
    cin>>s ;
    if( s[s.size()-1] == 'o' ) cout<<"FILIPINO"<<endl  ;
    else if ( s[s.size()-1] == 'u' ) cout<<"JAPANESE"<<endl ;
    else cout<<"KOREAN"<<endl ;
  } 
}
