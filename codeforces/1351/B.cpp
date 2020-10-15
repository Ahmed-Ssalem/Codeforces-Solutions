#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int tests, a, b, c, d;  cin>>tests;
    while (tests--)
    {
        cin>>a>>b>>c>>d;
        if (max(a,b) == max(c,d) && max(a,b) == (min(a,b) + min(c,d)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}