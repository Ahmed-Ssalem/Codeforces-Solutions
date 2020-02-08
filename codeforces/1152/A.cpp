#include<bits/stdc++.h>
using namespace std;
int main()
{    
int n , m ;  cin>>n >>m ;
int a[n] , b[m] , x = 0 , kodd = 0 , keven = 0 , codd = 0 , ceven = 0 ;
for ( int i = 0 ; i < n ; ++i ){
cin>>a[i] ;
if( a[i]%2 == 0 ) ceven++ ;
else codd++ ;
}
for ( int j = 0 ; j < m ; ++j ){
cin>>b[j] ;
if( b[j]%2 == 0 ) keven++ ;
else kodd++ ;
}
x = min(ceven,kodd)+min(codd,keven) ;
cout<<x ;
}   




   