#include <iostream>

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void my_selection_sort(int* nums, int size)
{
	for(int i = 0; i < size - 1; i++) {
		int min = i;
		
		for(int j = i + 1; j < size; j++) {
			if(nums[j] < nums[min]) min = j;
		}
		
		if(min != i) swap(&nums[i], &nums[min]);
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
	
	my_selection_sort(nums, 10);
	
	std::cout << "After sort: ";
	for(int i = 0; i < 10; i++) {
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";
	
	return 0;
}