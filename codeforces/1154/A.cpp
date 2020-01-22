#include<bits/stdc++.h>
using namespace std;
int main()
{    
  int a[5] ; int x = 0 , y = 0 , z = 0 ;
  for ( int i = 0 ; i < 4 ; ++i ){
    cin>>a[i] ;
  }
  sort( a , a+4 , greater<int>() ) ;
  for ( int i = 0 ; i < 4 ; ++i ){
    x = a[0] - a[1] ;
    y = a[0] - a[2] ;
    z = a[0] - a[3] ;
  }
  cout <<x<<" "<<y<<" "<<z ;
}
