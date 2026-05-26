#include <iostream>
#include <string>

int sum(int a, int b){
	return a+b;
}

int rest(int a, int b){
	return a-b;
}

int multiply (int a, int b){
	return a*b;
}

float division (int a, int b){
	return a/b;
}

void printMenu(){
	std::cout << "Choose an operation:";
	std::cout << "1) Sum.";
	std::cout << "2) Rest.";
	std::cout << "3) Multiplication.";
	std::cout << "4) Devision.";
	std::cout << "q) quit";
}

int main(){
	int a;
	int b;
	int result;
	
	printMenu();
	int user_option;
	std::cin >> user_option;
		
	while(user_option!= "q"){
	
		switch(user_option){
			case 1:
				result=sum(a,b);
			case 2:
				result=rest(a,b);
			case 3:
				result=multiply(a,b);
			case 4:
				float new_result=division(a,b);
				
		}
		if(user_option == "4"){
			std::cout << "Result is:"<< new_result <<std::endl; 			
		}
		else{
		
		}
		std::cout << "Result is: " << result << std::endl;
		printMenu();
		std::string user_option;
		std::cin >> user_option;

	}
	std::cout << "END!"
	return 0;

}
