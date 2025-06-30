#include <iostream>
#include <vector>
using namespace std;

void my_quick_sort(int a[], int left, int right);

int main()
{
	const int N = 20;
	int a[N];
	
	for(int i = 0; i < N; i++) {
		a[i] = rand() % 20;
		cout << a[i] << " ";
	}
	cout << "\n\n";
	
	my_quick_sort(a, 0, N - 1);
	
	for(int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}

void my_quick_sort(int a[], int left, int right)
{
	if(left > right) return;
	
	int p = a[(left + right) / 2];
	int i = left;
	int j = right;
	
	while(i <= j) {
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		
		if(i <= j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	
	my_quick_sort(a, left, j);
	my_quick_sort(a, i, right);
}

