#include <bits/stdc++.h>
using namespace std;

//===================== Salem ============================

#define forn(i,n)  for (int i = 0; i < (int)(n); ++i)
#define for1(i,n)  for (int i = 1; i <=(int)(n); ++i)
#define ulli       unsigned long long int
#define ull        unsigned long long
#define lli        long long int
#define ll         long long
#define all(v)     (v).begin(),(v).end()
#define PI         3.14159265359
#define pb         push_back
#define pp         pop_back
#define PI         3.14159265359
const int mod = 1e9+7;
const ll inf = 1e18;

//========================================================
void FastInputOutput()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{

    // cout << fixed << setprecision(10);
    //freopen("contest.in","r", stdin);
    //freopen("output.txt", "w", stdout);
    //transform(su.begin(), su.end(), su.begin(), ::toupper);

    int t; cin>>t;
    while (t--)
    {
        long long n; cin>>n;
        if (n == 1) cout<<0<<endl;
        else if (n == 2) cout<<1<<endl;
        else if (n == 3) cout<<2<<endl;
        else if (n % 2 == 0 && n != 2) cout<<2<<endl;
        else if (n % 2 != 0 && n != 1 && n != 3) cout<<3<<endl;
    }
}
