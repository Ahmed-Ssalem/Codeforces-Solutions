#include<bits/stdc++.h>
using namespace std;
int main()
{    
  int x  ;  cin>>x;
  int y;
  while( x-- ){
    cin>>y;
    if ( y== 2 ) cout<<"2"<<endl;
    else if ( y>2 ) {
      if( y%2 == 0 ) cout<<"0"<<endl;
      else if ( y%2 != 0 ) cout<<"1"<<endl;
    }
  }
}
