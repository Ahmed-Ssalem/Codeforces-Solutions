#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int n ;  cin>>n ;
  char fir , sec ;
  char c[n][n] ;
  bool x = true ;
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j =0 ; j < n ; ++j ){
      cin>>c[i][j] ;
      fir = c[0][0] ;  sec = c[0][1];
      if ( i == j){
        if ( fir != c[i][j] ){
        x = false ; 
        break ;
      }
      }
      else if ( i == n-j-1){
        if ( fir != c[i][j] ){
        x = false ;
        break ;
      }
      }
      else{
        if ( sec != c[i][j]  ||  fir == c[i][j] ){
        x = false ;
        break ;
       }
      }
    }
  }
  if ( x ) cout<<"YES" ;
  else cout<<"NO";
}