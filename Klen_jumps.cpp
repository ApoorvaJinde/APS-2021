#include <bits/stdc++.h>
using namespace std;

int minStepsNeeded(int k, int d1, int d2, int x)
{
	int gcd = __gcd(d1, d2);

	if ((k - x) % gcd != 0)
		return -1;

	queue<pair<int, int> > q;

	unordered_set<int> visited;

	q.push({ k, 0 });

	visited.insert(k);

	while (!q.empty()) 
  {

		int s = q.front().first;

		int stp = q.front().second;

		if (s == x)
			return stp;

		q.pop();

		if (visited.find(s + d1) == visited.end()) 
    {
			q.push({ s + d1, stp + 1 });

			visited.insert(s + d1);
		}

		if (visited.find(s + d2) == visited.end()) {
			q.push({ s + d2, stp + 1 });
			visited.insert(s + d2);
		}

		if (visited.find(s - d1) == visited.end()) {
			q.push({ s - d1, stp + 1 });
			visited.insert(s - d1);
		}
		if (visited.find(s - d2) == visited.end()) {
			q.push({ s - d2, stp + 1 });
			visited.insert(s - d2);
		}
	}
}

int main()
{
	int k = 10, d1 = 4, d2 = 6, x = 8;

	cout << minStepsNeeded(k, d1, d2, x);

	return 0;
}
