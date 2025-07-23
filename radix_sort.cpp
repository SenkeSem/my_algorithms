#include <vector>
#include <iostream>
using namespace std;

// O(d * n)
// n = arr.size()
void radix_sort(vector<int>& arr)
{
	vector<vector<int>> buckets(10);
	int power_of_ten = 1;
	int d = 5;
	
	for(int pow = 0; pow <= d; ++pow) {
		for(auto elem : arr) {
			buckets[elem / power_of_ten % 10].push_back(elem);
		}
		
		arr.clear();
		
		for(int i = 0; i < buckets.size(); ++i) {
			for(int j = 0; j < buckets[i].size(); ++j) {
				arr.push_back(buckets[i][j]);
			}
			
			buckets[i].clear();
		}
		power_of_ten *= 10;
	}
}


int main()
{
	vector<int> arr;
	const int n = 10;
	
	for(int i = 0; i < n; ++i) {
		arr.push_back(rand());
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	
	radix_sort(arr);
	
	for(int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	
	return 0;
}