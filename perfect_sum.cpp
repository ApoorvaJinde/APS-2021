#include <bits/stdc++.h>
using namespace std;

void sumSubsets(vector<int> set, int n, int target)
{
	int x[set.size()];
	int j = set.size() - 1;

	while (n > 0)
	{
		x[j] = n % 2;
		n = n / 2;
		j--;
	}

	int sum = 0;

	for (int i = 0; i < set.size(); i++)
		if (x[i] == 1)
			sum = sum + set[i];

	
	if (sum == target)
	{
		cout<<("{");
		for (int i = 0; i < set.size(); i++)
			if (x[i] == 1)
				cout << set[i] << ", ";
		cout << ("}, ");
	}
}

void findSubsets(vector<int> arr, int K)
{
	int x = pow(2, arr.size());

	for (int i = 1; i < x; i++)
		sumSubsets(arr, i, K);
}

int main()
{
	vector<int> arr = { 5, 10, 12, 13, 15, 18 };
	int K = 30;
	findSubsets(arr, K);
	return 0;
}

