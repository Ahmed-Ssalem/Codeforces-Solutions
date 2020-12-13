#include <bits/stdc++.h>
using namespace std;

//===================== Salem ============================

#define forn(i,n)  for (int i = 0; i < (int)(n); ++i)
#define for1(i,n)  for (int i = 1; i <= (int)(n); ++i)
#define ulli       unsigned long long int
#define ull        unsigned long long
#define lli        long long int
#define ll         long long
#define all(v)     (v).begin(),(v).end()
#define allr(v)    (v).rbegin(),(v).rend()
#define sz(v)      (int)((v).size())
#define PI         3.14159265359
#define pb         push_back
#define pp         pop_back
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
	/*list <int> :: iterator it = l.begin();
	  for ( ;it != l.end(); ++it)
		  cout<<*it<<" ";
	*/

	int n, k;     cin>>n>>k;
	string s;  cin>>s;
	vector<vector<int>> v(26);
	for (int i = 0; i < n; ++i)
	{
		v[s[i] - 'a'].push_back(i);
	}
	bool c[n];
	for (int i = 0; i < n; i++)
		c[i] = 1;

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			if (k != 0)
			{
				c[v[i][j]] = 0;
				k--;
			}
		}
	}
	for (int i = 0; i < n; i++)
		if (c[i] == 1)
			cout << s[i];

	return 0;
}
