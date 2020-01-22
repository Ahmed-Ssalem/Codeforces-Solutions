#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int n , m ;  cin>>n ;
   string s;
   while( n--){
     cin>>m>>s ;
    int x = s.find('8') ;
    if ( x != - 1  && m-x >= 11 ) cout << "YES"<<endl ;
    else cout << "NO"<<endl ;
    
  }
} 