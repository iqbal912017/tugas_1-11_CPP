#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"masukan nilai x :";
	cin>>x;
	cout<<"masukan nilai y :";
	cin>>y;
	
	if (x%2==1){
		if(y%2==1){
			cout<<"x ganjil dan y ganjil";
		}else
		{
			cout<<"x ganjil dan y genap";
		}
	} else{
		if(y%2==1){
			cout<<"X genap dan Y ganjil";
		}else{
			cout<<"X genap dan y genap";
		}
	}
}
