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

	int a, b, x;  cin>>a>>b>>x;
	int count[2] = {a, b};
	vector <int> v;
	if (a >= b)
	{
		v.pb(0);
		count[0]--;
	}
	else if (b >= a)
	{
		v.pb(1);
		count[1]--;
	}
	for (int i = 0; i < x; ++i)
	{
		int num = 1 - v.back();
		v.pb(num);
		count[num]--;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
		if (count[v[i]])
		{
			for (int j = 0; j < count[v[i]]; ++j)
				cout<<v[i];
			count[v[i]] = 0;
		}
	}

	/*for (int i = 0; i < v.size(); i++)
			cout << v[i];*/
	return 0;
}
