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
    int k,x,y;
    cin>>k>>x>>y;
    adu.erase(adu.begin()+k-1);
    adu.erase(adu.begin()+x-1,adu.begin()+y-1);
    cout<<adu.size()<<endl;
    for(int x: adu)cout<<x<<" ";

    return 0;
}

