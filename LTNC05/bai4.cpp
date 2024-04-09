#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define pb push_back

vector<int>v;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        v.pb(t);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        int k = lower_bound(v.begin(),v.end(),t) - v.begin();
        if(v[k]==t)
        {
            cout << "Yes" << " " << k + 1 << endl;
        }
        else cout << "No" << " " << k + 1 << endl;
    }
    return 0;
}

