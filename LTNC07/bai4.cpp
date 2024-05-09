#include <bits/stdc++.h>

using namespace std;

#define int long long

int cnt = 0;
int f[1005];

int x, n;

bool kt[1005];
bool kiemtra[1005];
string xau[15];

char res[15][15];
char codi[15][15];
bool check[15][15][3];

char a[15][15];




struct data
{
    int x, y, l, rota;
};

data cross[12];

///0 la chieu ngang
///1 la chieu doc
void pre()
{
    for(int ii = 0; ii < 10; ii++)
        for(int jj = 0; jj < 10; jj++)
        {
            char c = a[ii][jj];
            if(c == '+')continue;

            ///ben phai
            if(a[ii][jj]==a[ii][jj+1] && check[ii][jj][0] == 0)
            {
                int i = ii;
                int j = jj;
                ++cnt;
                cross[cnt].x = i;
                cross[cnt].y = j;
                check[ii][jj][0] = 1;
                cross[cnt].rota = 0;

                while(a[i][j]==a[i][j+1] && j + 1 < 10)
                {
                    check[i][j+1][0] = 1;
                    cross[cnt].l++;
                    j++;
                }
            }

            ///chieu doc
            if(a[ii][jj]==a[ii+1][jj] && check[ii][jj][1] == 0)
            {
                int i = ii;
                int j = jj;
                ++cnt;
                cross[cnt].x = i;
                cross[cnt].y = j;
                check[ii][jj][1] = 1;
                cross[cnt].rota = 1;
                while(a[i][j]==a[i+1][j] && i + 1 < 10)
                {
                    check[i+1][j][1] = 1;
                    cross[cnt].l++;
                    i++;
                }
            }
        }
for(int i = 1; i<= cnt; i++)cross[i].l++;
     ///------
     string l;
    cin >> l;
     l = l + ';';
    int ll = l.size();

    string tam;

    int cnt2 = 0;
    for(int i = 0; i<ll; i++)
    {
        char c = l[i];
        if(c != ';')tam+=c;
        else
        {
            xau[++cnt2] = tam;
            tam = "";
        }
    }
}


bool ok(int n, int id)
{
    string str = xau[id];

    int ll = str.size();

    if(ll != cross[n].l)return 0;

    int type = cross[n].rota;

    if(type == 0)
    {
        for(int i = cross[n].y; i <= cross[n].y + cross[n].l - 1; i++)
        {
            if(res[cross[n].x][i] == '-')res[cross[n].x][i] = str[i- cross[n].y];
            else
            {
                if(res[cross[n].x][i] == str[i - cross[n].y])continue;
                else return 0;
            }
        }
        return 1;
    }
    else if(type == 1)
    {
        for(int i = cross[n].x; i<= cross[n].x + cross[n].l - 1; i++)
        {
            if(res[i][cross[n].y] == '-')res[i][cross[n].y] = str[i - cross[n].x];
            else
            {
                if(res[i][cross[n].y] == str[i - cross[n].x])continue;
                else return 0;
            }
        }
        return 1;
    }
    return 1;
}

void xoa(int id)
{
    int type = cross[id].rota;

    if(type == 0)
    {
        for(int i = cross[id].y; i <= cross[id].y + cross[id].l - 1; i++)
        {
            if(codi[cross[id].x][i] == 1)continue;
            res[cross[id].x][i] = '-';
        }
    }
    if(type == 1)
    {
        for(int i = cross[id].x; i <= cross[id].x + cross[id].l - 1; i++)
        {
            if(codi[i][cross[id].y] == 1)continue;
            res[i][cross[id].y] = '-';
        }
    }
}

void done()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << res[i][j];
        }
        cout << endl;
    }
    exit(0);
}

void ghim(int id)
{
    int type = cross[id].rota;
    if(type == 0)
    {
        for(int i = cross[id].y; i <= cross[id].y + cross[id].l - 1; i++)
        {
            codi[cross[id].x][i] = 1;
        }
    }
    if(type == 1)
    {
        for(int i = cross[id].x; i <= cross[id].x + cross[id].l - 1; i++)
        {
            codi[i][cross[id].y] = 1;
        }
    }
}
void thaoghim(int id)
{
    int type = cross[id].rota;

    if(type == 0)
    {
        for(int i = cross[id].y; i <= cross[id].y + cross[id].l - 1; i++)
        {
            codi[cross[id].x][i] = 0;
        }
    }
    if(type == 1)
    {
        for(int i = cross[id].x; i <= cross[id].x + cross[id].l - 1; i++)
        {
            codi[i][cross[id].y] = 0;
        }
    }
}
void bk(int n)
{
    if(n == cnt + 1)done();
    for(int i = 1; i <= cnt; i++)
    {
        if(kiemtra[i])continue;
        if(ok(n,i))
        {
            kiemtra[i] = 1;
            ghim(n);
            bk(n+1);
            thaoghim(n);
            xoa(n);
            kiemtra[i] = 0;
        }
        else xoa(n);
    }
}

signed main()
{
  //  freopen("test.inp" , "r",stdin);
   // freopen("test.out" , "w",stdout);
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
        {
            cin >> a[i][j];
            res[i][j] = a[i][j];
        }
    pre();
    bk(1);

    return 0;
}

