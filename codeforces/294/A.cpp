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

	int n;
	cin>>n;
	int arr[n];
	forn (i, n)
		cin>>arr[i];
	int m;
	cin>>m;
	while (m--)
	{
		int x, y;
		cin>>x>>y;
		--x;
		if (x != 0)
			arr[x-1] += (y - 1);
		if (x != n-1)
			arr[x+1] += (arr[x] - y);
		arr[x] = 0;
	}
	forn (i, n)
		cout<<arr[i]<<endl;

	return 0;
}
