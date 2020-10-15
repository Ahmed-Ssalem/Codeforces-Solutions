#include <iostream>

using namespace std;

int main()
{
    int x; cin>>x;
    int y = x * 2;
    int a[y];
    for (int i = 0; i < y; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < y; i+=2)
    {
        cout<<a[i]+a[i+1]<<endl;
    }
}