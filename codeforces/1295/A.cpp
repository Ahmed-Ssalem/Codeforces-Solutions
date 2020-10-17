#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int tests, a, b;  cin>>tests;
    while (tests--)
    {
        cin>>a;
        if (a % 2 == 0)
        {
            b = a / 2;
            for(int i = 0; i < b; ++i)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else if(a % 2 != 0 && a != 3)
        {
            b = (a - 3) / 2;
            cout<<7;
            for(int i = 0; i < b; ++i)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else if (a == 3)
            cout<<7<<endl;
    }
}


