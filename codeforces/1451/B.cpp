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

    int t, n, q, l, r;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n>>q>>s;
        int x,y;
        while (q--)
        {
            cin>>l>>r;
            x = s.find_first_of (s[l-1]);
            y = s.find_last_of (s[r-1]);
            if(x == l-1 && y == r-1)
    		{
    			cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
        }
    }
    /*string s = ("001000");
    int l = 1, r = 3;
    int x = s.find_first_of(s[l-1]);
    int y = s.find_last_of(s[r-1]);
    cout<<x<<" "<<y;*/
}
