#include <iostream>

using namespace std;

int luas(int x, int y)
{
	int luas = x * y/2;
	return luas;
}

int main()
{
	int a, b, j;
	cout <<"masukan alas segitiga ";
	cin>>a;
	cout<<"masukan tinggi segitiga ";
	cin>>b;
	
	j= luas(a,b);
	cout<<j;
}
