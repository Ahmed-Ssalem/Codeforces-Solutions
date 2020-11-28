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

	int n, k, count = 0, l = 0;  cin>>n>>k;
	if (k > 0) l = k - 1;
	vector <int> v;
	while(n--)
	{
		int a;   cin>>a;
		v.pb(a);
	}
	sort(all(v));
	if( k == 0 )
	{
		if( v[0] > 1 )
		{
			cout<<1<<endl;
		}
		if( v[0] == 1 )
		{
	         cout<<-1<<endl;
	    }
	}
	else
	{
		int lenv = v.size();
		for(int i = 0; i < lenv; ++i)
		{
			if (v[l]+1 > v[i]) count++;
			else break;
		}
		if (count == k)
			cout<<v[l];
		else
			cout<<-1;
		return 0;
	}
}

