#include <vector>
using namespace std;

//bubbleSort takes in an array and returns the array sorted using the bubbleSort algorithm
vector<int> bubbleSort(vector<int> array) {
  // Write your code here.
	bool isSorted=false;
	while(!isSorted){
		int counter=1;
		for(auto i=0;i<array.size()-1;i++){
			if(array[i] > array[i+1]){
				swap(array[i],array[i+1]);
			}
			else{
				counter++;
			}
		}
		if(counter == array.size()){
			isSorted = true;
		}
	}
	return array;
}
