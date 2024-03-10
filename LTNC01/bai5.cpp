#include<bits/stdc++.h>
using namespace std;
#define int long long

int max_of_four(int a, int b, int c, int d)
{
    int x = max(max(a,b) , max(c,d) );
    return x;
}

signed main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}

