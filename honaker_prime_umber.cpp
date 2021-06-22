/*

Honaker Prime Number is a prime number P such that the sum of digits of P and sum of digits of index of P is a Prime Number.
Few Honaker Prime Numbers are: 

131, 263, 457, 1039, 1049, 1091, 1301, 1361, 1433, 1571, 1913, 1933, 2141, 2221,… 

*/

#include <bits/stdc++.h>
#define limit 10000000
using namespace std;

int position[limit + 1];

void sieve()
{
	// 0 and 1 are not prime numbers
	position[0] = -1, position[1] = -1;

	// Variable to store the position
	int pos = 0;

	for (int i = 2; i <= limit; i++) {

		if (position[i] == 0) {

			// Incrementing the position for
			// every prime number
			position[i] = ++pos;
			for (int j = i * 2; j <= limit; j += i)
				position[j] = -1;
		}
	}
}

int getSum(int n)
{
	int sum = 0;
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

bool isHonakerPrime(int n)
{
	int pos = position[n];
	if (pos == -1)
		return false;
	return getSum(n) == getSum(pos);
}

int main()
{
	// Precompute the prime numbers till 10^6
	sieve();

	// Given Number
	int N = 121;

	// Function Call
	if (isHonakerPrime(N))
		cout << "Yes";
	else
		cout << "No";
}
