#include <iostream>

int sum(int a, int b){

	return a+b;

}

int main(){
	int a;
	int b;
	int result;

	std::cout <<"Enter number A: ";
	std::cin >> a;
	
	std::cout <<"Enter number B: ";
	std::cin >> b;

	result = sum(a,b);
	
	std::cout << "Result of A+B is = "<< result << std::endl;
	

	return 0;

}
