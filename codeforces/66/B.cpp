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

	int n;  cin>>n;
	vector <int> height (n);
	vector <int> count (n, 1);
	forn(i, n)
	{
		cin>>height[i];
	}
	int x = 0, after = 1, before = 0;
	while (after < n && height[x] > height[after])
	{
		count[0]++;
		x++;
		after++;
	}
	for (int i = 1; i < n - 1; ++i)
	{
		x = i, after = i + 1, before = i - 1;
		while (before >= 0 &&  height[x] >= height[before])
		{
			count[i]++;
			x--;
			before--;
		}
		x = i;
		while (after < n && height[x] >= height[after])
		{
			count[i]++;
			x++;
			after++;
		}
	}
	x = n - 1, before = n - 2;
	while (before >= 0 && height[x] >= height[before])
	{
		count[n-1]++;
		x--;
		before--;
	}
	sort(all(count));
	cout<<count[n-1];
    return 0;
}