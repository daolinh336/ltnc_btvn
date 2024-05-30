#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int l = s.size();

        for(int i = 0; i < l; i+=2)
        {
            cout << s[i];
        }
        cout << " ";
        for(int i = 1; i < l; i+=2)
        {
            cout << s[i];
        }
        cout << endl;

    }
}

