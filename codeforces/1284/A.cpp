#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  
  int n , m  ;  cin>>n>>m ;
  string s[21] , t[21] ;
  for ( int i = 1 ; i <= n ; ++i ){
    cin>>s[i] ;
  }
  for ( int i = 1 ; i <= m ; ++i ){
    cin>>t[i] ;
  }
  int q ;  cin>>q ;
  int arr[2021] ;
  for ( int i = 1 ; i <= q ; ++i ){
    cin>>arr[i] ;
  }
  for ( int i = 1 ; i <= q ; ++i ){
    int x = 0 , y = 0 ;  
    x = arr[i] % n ;
    y = arr[i] % m ;
    if ( arr[i] % n == 0 ) x = n ;
    if ( arr[i] % m == 0 ) y = m ;
    cout<<s[x]<<t[y]<<endl ;
  }
}




