#include <bits/stdc++.h>
using namespace std;

//===================== Salem ============================

#define go         ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
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
#define el         '\n'
const int mod = 1e9 + 7;
const ll inf = 1e18;

//========================================================


int main() {

	go
	;
	int n, k;
	string s;
	cin >> n >> k >> s;

	if (k) {
		if (n == 1)
			s = "0", k = 0;
		else if (s[0] != '1')
			s[0] = '1', k--;
		for (int i = 1; i < n && k; ++i) {
			if (s[i] != '0')
				s[i] = '0', k--;
		}
	}
	cout << s;

}
