#include<bits/stdc++.h>
using namespace std;
int main()
{    
int n ;  long long d , s = 2 ; 
cin>>n>>d ;
int arr[n] ;
for ( int i = 0 ; i < n ; ++i ){
  cin>>arr[i] ;
}
for ( int i = 0 ; i < n-1 ; ++i ){  
  if ( (arr[i+1]-arr[i]) > 2*d ) s+= 2 ;
  else if ( (arr[i+1]-arr[i]) == 2*d ) s++ ;
}
 cout<<s;
}