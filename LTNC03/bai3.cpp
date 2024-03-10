#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string convertnum(string a,string b)
{
    if(b=="AM")
    {
         int k = 0;
    int x2 = a[1] - '0';
    int x1 = a[0] - '0';
    k =  x1*10+x2;
    if(k-12>=0)k -= 12;
    a[1] = char(k%10 + '0');
    a[0] = char(k/10 + '0');
    return a;
    }
    else
    {
{
    int k = 0;
    int x2 = a[1] - '0';
    int x1 = a[0] - '0';
    k =  x1*10+x2;
    if(k+12<24)
    k += 12;
    a[1] = char(k%10 + '0');
    a[0] = char(k/10 + '0');
    return a;
}
    }
}

string timeConversion(string s)
{
    int ss = s.size();
    string tmp = "";
    tmp += s[0];
    tmp += s[1];
    string tmp2 = "";
    tmp2 += s[ss-2];
    tmp2 += s[ss-1];

    string o = convertnum(tmp,tmp2);

    string res = "";
    res+=o;
    for(int i=2;i<ss-2;i++)res+=s[i];

    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

