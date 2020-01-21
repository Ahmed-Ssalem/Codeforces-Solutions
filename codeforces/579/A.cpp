#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int x , sum = 0 ;  cin>>x;
  while( x > 0 ){
    if( x%2 == 1 ) sum++ ;
    x /= 2 ;
  }
  cout<<sum ;
}
