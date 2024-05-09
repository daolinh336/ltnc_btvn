#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

using namespace std;

#define int long long

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

 int cnt = 0;
 int res = 0;
 int f[1005];

 int x, n;

bool kt[1005];

int tinhmu(int x, int somu)
{
    int res = 1;
    for(int i = 1; i <= somu; i++)
    {
        res = res * x;
    }
    return res;
}


void pre()
{
    for(int i = 1; i<= 1000; i++)
    {
        int k = tinhmu(i,n);
        if(k <= x) f[++cnt] = k;
        else break;
    }
}

void bk(int id, int sum)
{
    if(sum == x)res++;
    for(int i = id + 1; i<=cnt; i++)
    {
        if(kt[i])continue;
        if(sum + f[i] <= x)
        {
            kt[i] = 1;
            bk(i, sum + f[i]);
            kt[i] = 0;
        }
    }
}

signed main()
{
    cin >> x >> n;
    pre();
    bk(0,0);
    cout << res;

    return 0;
}

