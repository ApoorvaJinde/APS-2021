#include<bits/stdc++.h>
using namespace std;

void bfs(int n, int m, int num)
{
	queue<int> q;

	q.push(num);

	while (!q.empty())
	{
		int stepNum = q.front();
		q.pop();

		if (stepNum <= m && stepNum >= n)
			cout << stepNum << " ";

		if (num == 0 || stepNum > m)
			continue;

		int lastDigit = stepNum % 10;

		int stepNumA = stepNum * 10 + (lastDigit- 1);
		int stepNumB = stepNum * 10 + (lastDigit + 1);

		
		if (lastDigit == 0)
			q.push(stepNumB);

		
		else if (lastDigit == 9)
			q.push(stepNumA);

		else
		{
			q.push(stepNumA);
			q.push(stepNumB);
		}
	}
}
void displaySteppingNumbers(int n, int m)
{
	for (int i = 0 ; i <= 9 ; i++)
		bfs(n, m, i);
}

int main()
{
	int n = 0, m = 21;

	displaySteppingNumbers(n,m);

	return 0;
}
