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

vector<int> count_prime_in_range_sieve(int n) {

	vector<bool> isprime(n + 1, true);
	vector<int> notprimes;
	isprime[0] = isprime[1] = -1;
	for (int i = 2; i * i <= n; ++i) {
		if (isprime[i]) {
			for (int j = i * 2; j <= n; j += i)
				isprime[j] = 0;
		}
	}
	for (int i = 0; i < (int) isprime.size(); ++i) {
		if (!isprime[i])
			notprimes.push_back(i);
	}
	return notprimes;
}

bool isPrime(int n) {
	if (n == 2)
		return true;

	if (n < 2 || n % 2 == 0)
		return false;

	for (int i = 3; i * i <= n; i += 2) {
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
	vector<int> notprimes = count_prime_in_range_sieve(10000000);
	for (int i = 0; i < (int) notprimes.size(); ++i) {
		int res = n - notprimes[i];
		if (!isPrime(res)) {
			cout << notprimes[i] << " " << res;

			break;
		}
	}

	return 0;
}
