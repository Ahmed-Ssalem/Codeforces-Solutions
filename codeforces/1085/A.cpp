

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin>>s;
    int len=s.length() , n , m ;
    if(len%2 == 0) n = len/2-1;
    else n = len/2;
    for(int i=n , m=n+1 ; m<len ; i-- , m++ ){
        cout<<s[i]<<s[m];
    }
    if(len%2 != 0) cout<<s[0];
}
