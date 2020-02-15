#include<bits/stdc++.h>
using namespace std;
int main()
{       
int n ;    cin>>n;
int arr[n] ;
vector<int>v1, v2, v3 ;
int c1=0 , c2=0 , c3=0 ;
for ( int i = 1 ; i <= n ; ++i ){
   cin>>arr[i] ;
   if( arr[i] == 1 ) { c1++ ;    v1.push_back(i) ;  }
   if( arr[i] == 2 ) { c2++ ;    v2.push_back(i) ;  }
   if( arr[i] == 3 ) { c3++ ;    v3.push_back(i) ;  }
}
int x = min( c1 , min( c2 , c3 ) ) ;
cout<<x <<endl ;
if( x != 0 ){
for ( int i = 0 ; i < x ; ++i ){
cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl ;
}
}

}
