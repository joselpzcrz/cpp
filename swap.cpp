#include <iostream>
using namespace std;

void swap(int* a, int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;

}


int main(){

	int a =10;
	int b =20;

	cout << "Values before swap A:" << a << "B:" << b << endl;
	swap(a,b);
        cout << "Values After swap A:" << a << "B:" << b << endl;
	
	return 0;
}
