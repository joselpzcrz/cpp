#include <iostream>
#include <vector>
using namespace std;

//Swap function used to swap values inside a vector
void swap(int* a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}

//This functions is used to print vector values.
void printVector(vector<int> vec){
	for (int i=0; i<vec.size();i++){
		cout << " '" << vec[i] << "' "; 
	}
	cout << "\n";
}

//This function uses vectors, but implementation with arrays is still pending to understand the differences between them.
//Receiving 'vector<int>& vec' (pass by reference) so we can modify vector
//Receiving only 'vector <int> vec' without '&' we are passing a copy that can not be modified.
void bubbleSort(vector<int>& vec){

	for (int i=0; i<vec.size()-1; i++){
		for (int j=0; j < vec.size()-i-1; j++){

			//printVector(vec);
			if (vec[j]>vec[j+1]){
				swap(vec[j],vec[j+1]);
			}
		}
	}		
}

int main(){
	
	vector<int> myVector = {20,8,1,100,500,400,-3};
	printVector(myVector);
	bubbleSort(myVector);
	printVector(myVector);
	
	return 0;
}
