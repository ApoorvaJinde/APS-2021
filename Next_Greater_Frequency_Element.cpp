// C++ program of Next Greater Frequency Element
#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

void NFG(int a[], int n, int freq[])
{
	stack<int> s;
	s.push(0);

	
	int res[n] = { 0 };
	for (int i = 1; i < n; i++)
	{
		

		if (freq[a[s.top()]] > freq[a[i]])
			s.push(i);
		else {

			while ( !s.empty()
				&& freq[a[s.top()]] < freq[a[i]])
			{

				res[s.top()] = a[i];
				s.pop();
			}
			s.push(i);
		}
	}

	while (!s.empty()) {
		res[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++)
	{
		
		cout << res[i] << " ";
	}
}

int main()
{

	int a[] = { 1, 1, 2, 3, 4, 2, 1 };
	int len = 7;
	int max = INT16_MIN;
	for (int i = 0; i < len; i++)
	{
		if (a[i] > max) {
			max = a[i];
		}
	}
	int freq[max + 1] = { 0 };

	for (int i = 0; i < len; i++)
	{
		freq[a[i]]++;
	}

	NFG(a, len, freq);
	return 0;
}
