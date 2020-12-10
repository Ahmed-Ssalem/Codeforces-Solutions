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


	ll n, m;
	cin>>n>>m;
	int arr[20][20];
	int countMbox = 0, countm = 0, result = 0;
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i][0]>>arr[i][1];
		countMbox += arr[i][0];
		countm += (arr[i][1] * arr[i][0]);
	}
	if (countMbox <= n)
	{
		cout<<countm;
		return 0;
	}
	while (n)
	{
		int x = 0;
		for (int i = 0; i < m; ++i)
			if (arr[x][1] < arr[i][1])
				x = i;
		if (n <= arr[x][0])
		{
			result += (n * arr[x][1]);
			cout<<result;
			return 0;
		}
		else
		{
			result += (arr[x][1] * arr[x][0]);
			n -= arr[x][0];
			arr[x][1] = 0;
		}
	}
	return 0;
}

