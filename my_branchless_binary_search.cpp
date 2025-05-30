#include <iostream>
using namespace std;

int my_bbs(int x, int len, int nums[])
{
	int* base = nums;
	
	while(len > 1) {
		int half = len / 2;
		base += (base[half - 1] < x) * half;
		len -= half;
	}
	
	if(*base == x) return *base;
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
	
	cout << "Find number " << key1 << ": " << my_bbs(key1, 10, numbers) << endl;
	cout << "Find number " << key2 << ": " << my_bbs(key2, 10, numbers) << endl;
	cout << "Find number " << key3 << ": " << my_bbs(key3, 10, numbers) << endl;
	cout << "Find number " << key4 << ": " << my_bbs(key4, 10, numbers) << endl;
	cout << "Find number " << key5 << ": " << my_bbs(key5, 10, numbers) << endl;
	cout << "Find number " << key6 << ": " << my_bbs(key6, 10, numbers) << endl;
	cout << "Find number " << key7 << ": " << my_bbs(key7, 10, numbers) << endl;
	
	return 0;
}