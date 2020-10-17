#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int tests, a;  cin>>tests;
    while (tests--)
    {
        cin>>a;
        if(a % 2 != 0)
        {
            cout<<7;
            a -=3;
        }
        while (a)
        {
            cout<<1;
            a -= 2;
        }
        cout<<endl;
    }
}