#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

   int tests;
   cin>>tests;
   int x = 0;
   while (tests--)
   {
       int n;
       cin>>n;
       x = pow(2,n);
       for(int i = n-1; i >= (n/2); --i){
        x -= pow(2,i);
       }
       for(int i = 1; i < (n/2); ++i){
        x += pow(2,i);
       }
       cout<<x<<endl;
   }

}


