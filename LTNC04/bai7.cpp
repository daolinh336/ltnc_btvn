#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1005][1005];
int cc[1005][1005];
int main() {
   // freopen("test.inp.c","r",stdin);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            if(c!='R')cc[i][j] = 1;
            if(c=='Y')dp[i][j]=1,dp[i][j-1]=1,dp[i][j+1]=1;
        }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(cc[i][j]==0)continue;
            if(dp[i-1][j]==1)
            {
                dp[i][j]=1;
                if(cc[i][j-1])dp[i][j-1] = 1;
                  if(cc[i][j+1])dp[i][j+1] = 1;
            }
          //  if((dp[i-1][j-1]==1|| dp[i-1][j+1]==1) && dp[i-1][j]==1)dp[i][j]=1;
        }
    }

for(int i=1;i<=m;i++)
    {
      //  cout<<dp[i][j]<<" ";
        if(dp[n][i]==1)
        {
          cout<<"YES";
           return 0;
        }

}

    cout<<"NO";
    return 0;
}


