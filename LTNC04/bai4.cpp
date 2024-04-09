#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define pb push_back

vector< vector<int> >adu;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;
    cin>>n>>q;
    adu.resize(n);
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        while(t--)
        {
            int k;
            cin>>k;
            adu[i].pb(k);
        }
    }
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<adu[i][j]<<endl;
    }

    return 0;
}

