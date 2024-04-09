#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s)
{
    int l = s.size();
    string tmp ="";
    for(int i=l-1;i>=0;i--)
    {
        tmp += s[i];
    }
    pair<int,int>cap;
    if(s==tmp)return -1;
    else
    {
        tmp ="";
        for(int i=0,j=l-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                cap={i,j};
                break;
            }
        }
        string s1,s2,ps1,ps2;
        for(int i=0;i<l;i++)
        {
            if(i!=cap.first)s1+=s[i];
            if(i!=cap.second)s2+=s[i];
        }
        for(int i=l-1;i>=0;i--)
        {
            if(i!=cap.first)ps1+=s[i];
            if(i!=cap.second)ps2+=s[i];
        }
        if(s1==ps1)return cap.first;
        else if(s2==ps2)return cap.second;
        else return -1;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

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

