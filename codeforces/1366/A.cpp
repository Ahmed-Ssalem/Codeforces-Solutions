#include <bits/stdc++.h>
using namespace std;

//========================================================

#define forn(i,n)  for (int i = 0; i < (int)(n); ++i)
#define for1(i,n)  for (int i = 1; i <=(int)(n); ++i)
#define ull        unsigned long long
#define ll         long long
#define all(v)     (v).begin(),(v).end()
#define PI         3.14159265359
#define pb         push_back
#define pp         pop_back

//========================================================
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a, b;
        cin>>a>>b;
        cout<<min(min(a, b), (a+b)/3)<<endl;

    }
}
