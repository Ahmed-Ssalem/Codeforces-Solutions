#include<bits/stdc++.h>
using namespace std;
int main()
{   
   double n , m ;  cin>>n ;
   double x = 0 , y = 0  ;
   for ( int i = 0 ; i < n ; ++i ){
     cin>>m ;
     x += m / 100 ;
   }
   y = ( x / n )*100 ;
   cout<<fixed<<setprecision(12)<<y ;
}
