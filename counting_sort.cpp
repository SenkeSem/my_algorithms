#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
	const int Nmax = 100;
	int c[10] = {0};
	int a[Nmax];
	
	srand(time(NULL));
	cout << "Berofe sort:\n";
	for(int i = 0; i < Nmax; i++) {
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	
	cout << "\n\nArray for counting: \n";
	for(int i = 0; i < 10; i++) {
		cout << c[i] << " ";
	}

	// counting
	for (int i = 0; i < Nmax; i++) c[a[i]]++; 
	
	cout << "\nArray for counting: \n";
	for(int i = 0; i < 10; i++) {
		cout << c[i] << " ";
	}

	// sorting
	int k = 0;
	for (int i = 0; i < 10; i++)  
		while (c[i] != 0)
		{
			a[k] = i;
			k++;
			c[i]--;
		};
	
	cout << "\n\nAfter sort:\n";
	for(int i = 0; i < Nmax; i++) {
		cout << a[i] << " ";
	}
		
	return 0;
}