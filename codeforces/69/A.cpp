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
#define el         endl
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

    int m;
    cin>>m;
    int n = m * 3;
    int arr[n];
    lli sumx = 0, sumy = 0, sumz = 0;
    forn(i, n)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i += 3)
    {
        sumx += arr[i];
    }
    for (int i = 1; i < n - 1; i += 3)
    {
        sumy += arr[i];
    }
    for (int i = 2; i < n; i += 3)
    {
        sumz += arr[i];
    }
    if (sumx == 0 && sumy == 0 && sumz == 0) cout<<"YES";
    else cout<<"NO";
}
