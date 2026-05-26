#include <iostream>
using namespace std;

int main(){
	
	//Pointers holds the MEMORY ADDRESS of another variable, rather tan storing a direct value itself.
	
	// 1. declaring a variable.
	int value = 8;
	
	// 2. declaring a POINTER storing the MEMORY ADDRESS of my value.
	int* ptr=&value;

	// 3. Print value.
	cout << "Value is: " << value << endl;

	// 4. Print memory address.
	cout << "Memory address is: (&val) " << &value << endl;

	// 5. Print address stored inside the pointer.
	cout << "Value stored in ptr is : " << ptr << endl;

	// 6. Print value stroed at that address.
	cout << "Value pointed to by prt (*ptr)" << *ptr << endl;
	
	return 0;
}
