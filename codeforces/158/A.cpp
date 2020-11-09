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
    // freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);
    //transform(su.begin(), su.end(), su.begin(), ::toupper);


    int n, k, ans = 0;
    cin>>n>>k;
    int a[n];
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] >= a[k] && a[i] > 0) ans++;
    }
    cout<<ans;


}
