#include <bits/stdc++.h>

using namespace std;
#define pb push_back

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

 bool ok(int x, vector<int>a, int n)
{
    for(int i=0;i<n;i++)
    {
        if(x%a[i]!=0)return 0;
    }
    return 1;
}
bool check(int x, vector<int>b, int m)
{
    for(int i=0;i<m;i++)
    {
        if(b[i]%x!=0)return 0;
    }
    return 1;
}

int getTotalX(vector<int> a, vector<int> b)
{
 int n = a.size();
 int m = b.size();

cin>>n>>m;

vector<int>adu;
    int mx = *min_element(b.begin(),b.end());

    for(int i=1;i<=(mx/2);i++)
    {
        if(mx%i==0 && check(i,b,m))adu.pb(i);
    }
    if(check(mx,b,m))adu.pb(mx);
    int res = 0;
    for(int x:adu)
    {
        if(ok(x,a,n))res++;
    }
  return res;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

