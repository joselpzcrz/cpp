#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec, int x){

        int vectorSize=vec.size();
        for (int i=0; i<vectorSize; i++){
                cout << "[" << vec[i] << "]" << " ";
	}
}

int binarySearch(vector<int> &arr, int x){
        int low=0;
        int high=arr.size()-1;
        cout << "Vector size is: " << arr.size() << "\n";

        //debug variable
        int cycleNumber = 0;


        while(low <=high){
                cout << "Staring cycle number: " << cycleNumber << "\n";

                int mid = low+(high-low)/2;
                cout << "low value : " << low << "\n";
                cout << "mid value: " << mid << "\n";
                cout << "high vale: " << high << "\n";

                if(arr[mid] == x){
                        return x;
                }
                if(arr[mid] < x){
                        low=mid+1;
                }
                else{
                        high=mid-1;
                }

        }
        return -1;
}


int main(){

        vector<int> myVector;
        myVector = {10,20,40,50, 60, 70, 75, 76, 80};
        

	int value=binarySearch(myVector, 75);
        cout << "Number found is: " << value << "\n";

        int value2=binarySearch(myVector, 80);
        cout << "Number found is: " << value2 << "\n";

        int value3=binarySearch(myVector, 10);
        cout << "Number found is: " << value3 << "\n";

        int value4=binarySearch(myVector, 500);
        cout << "Number found is: " << value4 << "\n";

        return 0;
}
