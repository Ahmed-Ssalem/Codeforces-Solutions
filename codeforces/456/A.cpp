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

	int n, a, b;
	vector <pair <int, int>> v;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a>>b;
		v.push_back({a, b});
	}
	sort(all(v));
	bool flag = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (v[i].first <= v[i+1].first)
		{
			if (v[i].second > v[i+1].second)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl;
    return 0;

}
