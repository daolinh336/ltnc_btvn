#include<bits/stdc++.h>
using namespace std;

int n;
char a[1005];

char kt[5];

void done()
{
    for(int i = 1; i <= 3; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

void bk(int n)
{
        if(n == 4)
        {
            done();
            return;
        }
     for(int i = 1; i <= 4; i++)
     {
            a[n] = kt[i];
            bk(n+1);
     }
}

signed main()
{
      kt[1] = 'a';
      kt[2] = 'b';
      kt[3] = 'c';
      kt[4] = 'd';
      bk(1);

}

