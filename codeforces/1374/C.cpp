#include <bits/stdc++.h>
using namespace std;

//========================================================

#define forn(i,n)  for (int i = 0; i < (int)(n); ++i)
#define for1(i,n)  for (int i = 1; i <=(int)(n); ++i)
#define ull        unsigned long long
#define ll         long long
#define all(v)     (v).begin(),(v).end()
#define PI         3.14159265359
#define pb         push_back
#define pp         pop_back

//========================================================
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;     cin>>n;
        string s;  cin>>s;
        int bal = 0, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(') bal++;
            else
            {
                bal--;
                if (bal < 0)
                {
                    bal = 0;
                    ans ++;
                }
            }
        }
        cout<<ans<<endl;
    }


}
