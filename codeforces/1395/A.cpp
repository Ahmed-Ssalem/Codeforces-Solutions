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
    int n;
    cin>>n;
    int arr[5];
    while (n--)
    {
        int odd = 0, even = 0;
        for (int i = 0; i < 4; ++i)
        {
            cin>>arr[i];
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        if (even > odd)
        {
            cout<<"Yes"<<endl;
        }
        else if (even == odd)
        {
            cout<<"No"<<endl;
        }
        else if (odd > even)
        {
            if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
