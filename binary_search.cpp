#include <iostream>

int my_binary_search(int nums[], int length, int key)
{
	int first = 0;
	int last = length - 1;
	int mid;
	bool flag = false;
	
	while((first <= last) && (flag != true)) {
		mid = first + (last - first) / 2;
		
		if(nums[mid] == key) flag = true;
		if(nums[mid] > key) last = mid - 1;
		else first = mid + 1;
	}
	
	if(flag) return nums[mid];
	else return -1;
}

int main()
{
	int key1 = 1;
	int key2 = 79;
	int key3 = 16777;
	int key4 = -4567;
	int key5 = 47;
	int key6 = 7;
	int key7 = 15;
	
	int numbers[10] = {1, 5, 7, 15, 36, 41, 47, 58, 66, 79};
	
	std::cout << "Find number " << key1 << ": " << my_binary_search(numbers, 10, key1) << std::endl;
	std::cout << "Find number " << key2 << ": " << my_binary_search(numbers, 10, key2) << std::endl;
	std::cout << "Find number " << key3 << ": " << my_binary_search(numbers, 10, key3) << std::endl;
	std::cout << "Find number " << key4 << ": " << my_binary_search(numbers, 10, key4) << std::endl;
	std::cout << "Find number " << key5 << ": " << my_binary_search(numbers, 10, key5) << std::endl;
	std::cout << "Find number " << key6 << ": " << my_binary_search(numbers, 10, key6) << std::endl;
	std::cout << "Find number " << key7 << ": " << my_binary_search(numbers, 10, key7) << std::endl;
	
	return 0;
}