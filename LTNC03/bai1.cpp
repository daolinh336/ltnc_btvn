#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Complete the program
  string a,b;
  getline(cin,a);
  getline(cin,b);

  int la = a.size();
  int lb = b.size();
  cout<<la<<" "<<lb<<endl;
  cout<<a<<b<<'\n';
  cout<<b[0];
  for(int i=1;i<la;i++)cout<<a[i];
  cout<<" ";
  cout<<a[0];
    for(int i=1;i<lb;i++)cout<<b[i];




    return 0;
}
