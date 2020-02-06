#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int arr[6] ; int f = 0 , s = 0 ;
for (int i = 0 ; i < 5 ; i++ ){
cin>>arr[i] ;
}
f = (arr[1]*arr[0])+(arr[3]*2) ;
s = (arr[2]*arr[0])+(arr[4]*2) ;
if( f < s ) cout<<"First" ;
else if ( s < f ) cout<<"Second" ;
else cout<<"Friendship" ;
} 


  