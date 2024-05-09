#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

#define ll long long
struct Box
{

    public:
    ll l;
    ll b;
    ll h;
    Box(ll l1 = 0, ll bb = 0, ll hh = 0)
    {
        l = l1;
        b = bb;
        h = hh;
    }
    ll getLength()
    {
        return l;
    }
    ll getBreath()
    {
        return b;
    }
    ll getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l * b * h;
    }
    bool operator<(Box& bb)
    {
        if(l < bb.l)return 1;
        else if(l == bb.l && b < bb.l)return 1;
        else if(l == bb.l && b == bb.b && h < bb.h)return 1;
        else return 0;
    }
    friend ostream& operator<<(ostream& out, const Box& aa)
    {
        out << aa.l << " " << aa.b << " " << aa.h;
        return out;
    }

};
// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}