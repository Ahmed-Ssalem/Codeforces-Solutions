#include<bits/stdc++.h>
using namespace std;
int main()
{   
int n , sum = 0 ;
cin>>n ;
int arr[n] ;
for (int i = 0 ; i < n ; i++ ){
cin>>arr[i] ;
if( arr[i] == 1 )	sum++ ;
}
cout<<sum<<endl ;
for(int i = 1 ; i < n ; i++ ){
if ( arr[i] == 1 )	cout<<arr[i-1]<<' ' ;
}
cout <<arr[n-1] ;
}