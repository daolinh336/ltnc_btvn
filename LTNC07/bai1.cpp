#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005];

int binaryS(int l, int r, int x)
{
    int mid = (l+r)/2;

    if(x == a[mid])return mid;

    else if(x < a[mid] && l < mid) return binaryS(l, mid - 1, x);

    else if(x > a[mid] && mid < r) return binaryS(mid + 1 , r, x);

    else return 0;
}

signed main()
{

      cin >> n;

    for(int i = 1; i<=n; i++)cin>>a[i];

    ///a phai tang dan

    cout << binaryS(1, n, 35);

}
