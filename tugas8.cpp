#include <iostream>

using namespace std;

int main()
{
	int x;
	cout<<"masukan nilai x :";
	cin>>x;
	switch(x) {
		case 10000 :
			cout<<"sepuluh ribu rupiah";
			break;
		case 20000 :
			cout<<"dua puluh ribu rupiah";
			break;
		case 30000:
			cout<<"tiga puluh ribu rupiah";
			break;
		case 40000:
			cout<<"empat puluh ribu rupiah";
			break;
		case 50000:
			cout<<"lima puluh ribu rupiah";
			break;
		default:
			cout<<"tidak terdaftar di program";
			break;
		
			
	}
}
