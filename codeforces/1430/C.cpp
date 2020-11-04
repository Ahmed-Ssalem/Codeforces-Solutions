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
        int n;     
        cin>>n;
        cout<<2<<endl<<n-1<<" "<<n<<endl;
        for (int i = n; i > 2; --i)
        {
            cout<<i-2<<" "<<i<<endl;
        }
    }
}
