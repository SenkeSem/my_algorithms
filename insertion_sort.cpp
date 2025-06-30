#include <iostream>

void my_insertion_sort(int* nums, int length)
{
	for(int i = 1; i < length; i++) {
		int key = nums[i];
		int j = i;
		
		while(j > 0 && nums[j - 1] > key) {
			nums[j] = nums[j - 1];
			j--;
		}
		
	nums[j] = key;
	}
}

int main()
{
	int nums[10] = {16, 5, 37, 150, 36, 1, 7, 18, 96, 29};
	
	std::cout << "\n";
	std::cout << "Before sort: ";
	for(int i = 0; i < 10; i++) {
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";
	
	my_insertion_sort(nums, 10);
	
	std::cout << "After sort: ";
	for(int i = 0; i < 10; i++) {
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";
	
	return 0;
}