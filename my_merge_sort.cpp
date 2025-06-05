#include <iostream>
#include <vector>
using namespace std;

void my_merge_sort(vector<int> &vec, size_t start, size_t end)
{
	if(end - start < 2) return;
	if(end - start == 2)
	{
		if(vec[start] > vec[start + 1]) swap(vec[start], vec[start + 1]);
		return;
	}
	
	my_merge_sort(vec, start, start + (end - start) / 2);
	my_merge_sort(vec, start + (end - start) / 2, end);
	
	vector<int> b;
	size_t b1 = start;
	size_t e1 = start + (end - start) / 2;
	size_t b2 = e1;
	
	while(b.size() < end - start)
	{
		if(b1 >= e1 || (b2 < end && vec[b2] < vec[b1]))
		{
			b.push_back(vec[b2]);
			++b2;
		}
		else
		{
			b.push_back(vec[b1]);
			++b1;
		}
	}
	
	for (size_t i = start; i < end; ++i)
		vec[i] = b[i - start];
}

int main()
{
	vector<int> v;
	
	for(int i = 0; i < 20; ++i)
		v.push_back(i);
	
	for(size_t i = 0; i < v.size(); ++i)
		swap(v[i], v[rand() % (v.size() - i) + i]);
	
	for(auto i: v)
		cout << i << " ";
	cout << endl;
	
	my_merge_sort(v, 0, v.size());
	
	for(auto i: v)
		cout << i << " ";
	cout << endl;
	
	return 0;
}