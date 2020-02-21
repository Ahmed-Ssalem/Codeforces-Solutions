#include<bits/stdc++.h>
using namespace std;
int main()
{   
  const string s = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
  char c ;  cin>>c ;
  string a ;  cin>>a ; 
  if( c == 'R'){ 
    for( int i = 0 ; i < a.size() ; ++i ){
     for( int j = 0 ; j < s.size() ; ++j ){
      if( s[j] == a[i] ) {   
      cout<<s[j-1] ;
      break ;
    }
   }
  }
 }
  else {  
    for( int i = 0 ; i < a.size() ; ++i ){
     for( int j = 0 ; j < s.size() ; ++j ){
      if( s[j] == a[i] ){
      cout<<s[j+1] ;
      break ;
    }
   }
  }
 } 
}

