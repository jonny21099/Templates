#include <vector>
using namespace std;

//insertionSort takes in an array and returns the array sorted using the insertionSort algorithm
vector<int> insertionSort(vector<int> array) {
  // Write your code here.
  for(auto i=1;i<array.size();i++){
		for(auto j=0;j<=i;j++){
			if(array[i] < array[j]){
				auto it = array.begin()+j;
				array.insert(it,array[i]);
				array.erase(array.begin()+i+1);		
			}
		}
	}
	return array;
}
