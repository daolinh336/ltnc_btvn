#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a1, b1, c1;

    int a2, b2, c2;

    cin >> a1 >> b1 >> c1;

    cin >> a2 >> b2 >> c2;
    if(c1 < c2)cout << 0;
    else if(c1 == c2 && b1 < b2)cout << 0;
   else  if(c1 == c2 && b2 == b1 && a1 <= a2)cout << 0;
    else if(c1 == c2 && b2 == b1)
    {
        cout << abs(15*(a2-a1));
    }
    else if(c1 == c2)
    {
        cout << abs(500*(b2-b1));
    }
    else cout << 10000;
}

