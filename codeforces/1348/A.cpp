#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

   int tests, n, x;
   cin>>tests;
   while (tests--)
   {
       cin>>n;
       x = (n / 2) + 1;
       cout<<pow(2,x) - 2<<endl;
   }

}


