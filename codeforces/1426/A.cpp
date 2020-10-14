#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

    int w; cin>>w;
    int q = w*2;
    int a[q];

    for (int i = 0; i < q; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < q; i += 2)
    {
        if (a[i] <= 2)
        {
            cout<<1<<endl;
        }
        else
        {
            int x = 0;
            x = ( (a[i] - 3) / a[i+1]) + 2;
            cout<<x<<endl;
        }
    }

}


