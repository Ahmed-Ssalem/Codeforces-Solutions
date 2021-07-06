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
const int mod = 1e9 + 7;
const ll inf = 1e18;

//========================================================
void FastInputOutput() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

bool isprime(lli n) {
	if (n == 2)
		return true;

	if (n < 2 || n % 2 == 0)
		return false;

	for (lli i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	//cout << fixed << setprecision(10);
	//freopen("contest.in","r", stdin);
	//freopen("output.txt", "w", stdout);
	//trvform(su.begin(), su.end(), su.begin(), ::toupper);
	/*list <int> :: iterator it = l.begin();
	 *for ( ;it != l.end(); ++it)
	 *    cout<<*it<<" ";
	 */
	int n;
	cin >> n;
	lli arr[n], m;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		m = sqrt(arr[i]);
		if (m * m == arr[i]) {
			if (isprime(m))
				cout << "YES" <<endl;
			else
				cout << "NO" <<endl;
		} else
			cout << "NO" <<endl;

	}
	return 0;
}
