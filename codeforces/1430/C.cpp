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
        int a = n - 2, b = n;
        cout<<2<<endl;
        if (n == 2) cout<<2<<" "<<1<<endl;
        else
        {
            cout<<a<<" "<<b<<endl<<n - 1<<" "<<n - 1<<endl;
            if (n < 4) continue;
            else
            {
                int z = n - 3;
                for (int i = 0; i < z; ++i)
                {
                    a--;
                    b--;
                    cout<<a<<" "<<b<<endl;
                }
            }
        }


    }


}
