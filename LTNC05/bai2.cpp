#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define pb push_back

vector<int>adu;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        adu.pb(t);
    }
   // cout<<adu.size();
    sort(adu.begin(),adu.end());
    for(int x: adu)cout<<x<<" ";
    return 0;
}

