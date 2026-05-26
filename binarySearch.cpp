#include <iostream>

int binarySearch(vector<int> &arr, int x){
	int low=0;
	int high=arr.size()-1;

	while(low <=high){
		int mid = low+(high-low)/2;
		
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] < x){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}


int main(){
	
	

	return 0;
}
