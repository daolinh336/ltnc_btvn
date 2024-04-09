#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a = 0, b=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        a+=t;
    }
    for(int i=1;i<=n+1;i++)
    {
        int t;cin>>t;
        b+=t;
    }
    cout<<b-a;
    return 0;
}

