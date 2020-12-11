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


	int n, k, count = 0;
	cin>>n>>k;
	list <int> l;
	forn (i, n)
	{
		int x; cin>>x;
		l.push_back(x);
	}

	while (l.size())
	{
		if (l.front() <= k)
		{
			count++;
			l.pop_front();
		}
		else
			break;
	}
	while (l.size())
	{
		if (l.back() <= k)
		{
			count++;
			l.pop_back();
		}
		else
			break;
	}
	cout<<count;
	/*list <int> :: iterator it = l.begin();
	for ( ;it != l.end(); ++it)
	{
		cout<<*it<<" ";
	}*/
	return 0;
}
