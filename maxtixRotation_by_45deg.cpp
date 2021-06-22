#include <bits/stdc++.h>
using namespace std;
void matrix(int n, int m, vector<vector<int>> li)
{
	
	
	int ctr = 0;
	
	while (ctr < 2 * n - 1)
	{
		for(int i = 0;
				i < abs(n - ctr - 1);
				i++)
		{
			cout << " ";
		}
		
		vector<int> lst;

		
		for(int i = 0; i < m; i++)
		{
			
			
			for(int j = 0; j < n; j++)
			{
 				if (i + j == ctr)
        {
					lst.push_back(li[i][j]);
				}
			}
		}
		
		for(int i = lst.size() - 1; i >= 0; i--)
		{
			cout << lst[i] << " ";
		}
		cout << endl;
		ctr += 1;
	}
}

int main()
{
	
	
	int n = 8;
	int m = n;

	vector<vector<int>> li{
		{ 4, 5, 6, 9, 8, 7, 1, 4 },
		{ 1, 5, 9, 7, 5, 3, 1, 6 },
		{ 7, 5, 3, 1, 5, 9, 8, 0 },
		{ 6, 5, 4, 7, 8, 9, 3, 7 },
		{ 3, 5, 6, 4, 8, 9, 2, 1 },
		{ 3, 1, 6, 4, 7, 9, 5, 0 },
		{ 8, 0, 7, 2, 3, 1, 0, 8 },
		{ 7, 5, 3, 1, 5, 9, 8, 5 } };
	
	
	matrix(n, m, li);

	return 0;
}


