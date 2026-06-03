#include <iostream>
#include <vector>
using namespace std;


//Pass by value # does not make changes to original vector.
void printVector(vector<int> vector){

	int vector_size=vector.size();
	for(int i=0;i<vector_size;i++){
		cout << "Element number " << i << " is : " << vector[i] << endl; 
	
	} 	

}


int main(){

	vector<int> my_vector ={10,20,30,40,50,60,70,100};
	printVector(my_vector);
	

	return 0;
}
