#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int n ;  cin>>n ;
  int arr[n] ;
  for ( int i = 0 ; i < n ; ++i ){
    cin>>arr[i] ;
  }
  bool x = true ;
  for ( int i = 0 ; i < n ; ++i ){
   int y = 0 ;
     for ( int j = 0 ; j < n ; ++j ){
        if( arr[i] == arr[j] ) ++y ;
        }
        if( n < 2*y-1 ){
          x = false ;
          break ;
        }
   }
  if(x) cout<<"YES" ;
  else cout<<"NO" ;
}
