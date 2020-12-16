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
	//cout << fixed << setprecision(10);
	//freopen("contest.in","r", stdin);
	//freopen("output.txt", "w", stdout);
	//trvform(su.begin(), su.end(), su.begin(), ::toupper);
	/*list <int> :: iterator it = l.begin();
	 *for ( ;it != l.end(); ++it)
	 *    cout<<*it<<" ";
	 */

	int n;  cin>>n;
	bool change = false, arrange = false;
	vector <pair <int, int>> v;
	forn (i, n)
	{
		int x, y;  cin>>x>>y;
		v.pb({x,y});
	}
	forn (i, n)
	{
		if (v[i].first == v[i].second)
			change = false;
		else
		{
			change = true;
			break;
		}
	}
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i].second >= v[i+1].second)
			arrange = true;
		else
		{
			arrange = false;
			break;
		}
	}
	if (change) cout<<"rated";
	else if (!change && !arrange) cout<<"unrated";
	else if (!change && arrange) cout<<"maybe";
	return 0;
}
