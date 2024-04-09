#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
map<string, int> mep;

map<string,int>::iterator itr;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int type, k;
    string s;
    while(n--)
    {
        cin>>type;
        if(type == 1)
        {
            cin >> s >> k;
            itr = mep.find(s);
            if(itr==mep.end())mep[s] = k;
            else mep[s] += k;
        }
        else if(type == 2)
        {
            cin >> s;
            mep.erase(s);
        }
        else
        {
            cin >> s;
            cout << mep[s] << '\n';
        }
    }

    return 0;
}




