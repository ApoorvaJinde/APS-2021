
#include <bits/stdc++.h>
using namespace std;

int prefixCount[32][10000];

void findPrefixCount(vector<int> arr,
					int size)
{
	// Iterate over the range[0, 31]
	for (int i = 0; i < 32; i++) {
		prefixCount[i][0]
			= ((arr[0] >> i) & 1);

		// Traverse the array and take prefix sum
		for (int j = 1; j < size; j++) {

			// Update prefixCount[i][j]
			prefixCount[i][j]
				= ((arr[j] >> i) & 1);
			prefixCount[i][j]
				+= prefixCount[i][j - 1];
		}
	}
}

void arrayBitwiseAND(int size)
{
	int result = 0;
	for (int i = 0; i < 32; i++) {
		int temp = prefixCount[i]
							[size - 1];
		if (temp == size)
			result = (result | (1 << i));
	}
	cout << result << " ";
}

void applyQuery(int currentVal, int newVal,int size)
{
	
	for (int i = 0; i < 32; i++) {

		int bit1 = ((currentVal >> i) & 1);
		int bit2 = ((newVal >> i) & 1);
		if (bit2 > 0 && bit1 == 0)
			prefixCount[i][size - 1]++;

		else if (bit1 > 0 && bit2 == 0)
			prefixCount[i][size - 1]--;
	}
}

void findbitwiseAND(
	vector<vector<int> > queries,
	vector<int> arr, int N, int M)
{
	findPrefixCount(arr, N);
	for (int i = 0; i < M; i++) {

		int id = queries[i][0];
		int newVal = queries[i][1];

		int currentVal = arr[id];

		arr[id] = newVal;

		applyQuery(currentVal, newVal, N);

		arrayBitwiseAND(N);
	}
}

int main()
{
	vector<int> arr{ 1, 2, 3, 4, 5 };
	vector<vector<int> > queries{ { 0, 2 },
								{ 3, 3 },
								{ 4, 2 } };
	int N = arr.size();
	int M = queries.size();
	findbitwiseAND(queries, arr, N, M);

	return 0;
}
