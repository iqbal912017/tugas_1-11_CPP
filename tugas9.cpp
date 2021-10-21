#include <iostream>

using namespace std;

int main()
{
	int x,z,y;
	z=0;
	cout<<"masukan limit perulangan :";
	cin>>x;
	y=1;
	
	while(y<=x)
	{
		cout<<z<<endl;
		z+=5;
		y++;
	}
}
