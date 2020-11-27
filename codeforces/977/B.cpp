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


	int lens;  cin>>lens;
	string s, s1;  cin>>s;
	vector <string> v;
	int count[lens-1], res = -1, res1 = -1;
	memset (count, 0, sizeof(count));
	for (int i = 0; i < lens-1; ++i)
	{
		s1 = s.substr(i, 2);
		v.push_back(s1);
	}
	for (int i = 0; i < lens-1; ++i)
	{
		for (int j = 0; j < lens-1; ++j)
		{
			if (v[i] == v[j])
			{
				count[i]++;
			}

		}
	}
	for (int i = 0; i < lens-1; ++i)
	{
		if (res < count[i])
		{
			res = count[i];
			res1 = i;
		}
	}
	cout<<v[res1];


    return 0;
}
