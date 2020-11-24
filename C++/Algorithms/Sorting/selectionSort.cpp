#include <vector>
using namespace std;

//selectionSort takes in an array and returns the array sorted using the selectionSort algorithm
vector<int> selectionSort(vector<int> array) {
		for(auto i=0;i<array.size();i++){
			int min = INT_MAX;
			int minIndex=0;
			for(auto j=i;j<array.size();j++){
				if(array[j] < min){
					min = array[j];
					minIndex = j;
				}
			}
			array.insert(array.begin()+i,min);
			array.erase(array.begin()+minIndex+1);
		}
	return array;
}
