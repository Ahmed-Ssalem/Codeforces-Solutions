#include<bits/stdc++.h>
using namespace std;
int main()
{   
  int n , m ;  cin>>n>>m ;
  char arr[n][m] ;
  int x = 0 ;
    for( int i = 0 ; i < n ; ++i ){
     for( int j = 0 ; j < m ; ++j ){
      cin>>arr[i][j] ;
  }
 }
 
    for( int i = 0 ; i < n ; ++i ){
     for( int j = 0 ; j < m ; ++j ){
        if( arr[i][j] == 'C'  ||  arr[i][j] == 'M'  ||  arr[i][j] == 'Y' )
        ++x ;
  }
 } 
 if( x ) cout<<"#Color" ;
 else cout<<"#Black&White" ;
} 
 


