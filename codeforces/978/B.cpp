#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int n ;  cin>>n ;
   int sumx = 0 , sum = 0 ;
   string s ; cin>>s ;
   for ( int i = 0 ; i < n ; i++ ){
     if ( s[i] == 'x' ) sumx++ ;
     if ( s[i] == 'x'  &&  s[i+1] == 'x'  &&  s[i+2] == 'x' ) sum++ ;
   }
   if ( sum == 0 ) cout<<"0" ;
   else if ( sum == 1  &&  sumx == 3 ) cout<<"1" ;
   else cout<< sum ;
}

