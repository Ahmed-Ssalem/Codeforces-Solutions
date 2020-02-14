#include<bits/stdc++.h>
using namespace std;
int main()
{    
int n  , sum = 0 ;
long long x ;    cin>>n>>x ; 
for ( int i = 0 ; i < n ; ++i ){
   string s ;  cin>>s ;
   int d ;  cin>>d ;
   if( s == "+" ) x += d ; 
   else{
    if( d <= x ) x -= d ;
    else sum++ ;  
  }
}
cout<<x<<" "<<sum ;
}