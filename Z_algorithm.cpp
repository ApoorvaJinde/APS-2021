/*
This algorithm finds all occurrences of a pattern in a text in linear time. Let length of text be n and of pattern be m, then total time taken is O(m + n) with linear space complexity. Now we can see that both time and space complexity is same as KMP algorithm but this algorithm is Simpler to understand.

In this algorithm, we construct a Z array.

What is Z Array?
For a string str[0..n-1], Z array is of same length as string. An element Z[i] of Z array stores length of the longest substring starting from str[i] which is also a prefix of str[0..n-1]. The first entry of Z array is meaning less as complete string is always prefix of itself.

Example:
Index            0   1   2   3   4   5   6   7   8   9  10  11 
Text             a   a   b   c   a   a   b   x   a   a   a   z
Z values         X   1   0   0   3   1   0   0   2   2   1   0 
*/

#include<iostream>
using namespace std;

void getZarr(string str, int Z[]);

void search(string text, string pattern)
{
	// Create concatenated string "P$T"
	string concat = pattern + "$" + text;
	int l = concat.length();

	// Construct Z array
	int Z[l];
	getZarr(concat, Z);

	// now looping through Z array for matching condition
	for (int i = 0; i < l; ++i)
	{
		// if Z[i] (matched region) is equal to pattern length we got the pattern
		if (Z[i] == pattern.length())
			cout << "Pattern found at index "
				<< i - pattern.length() -1 << endl;
	}
}

void getZarr(string str, int Z[])
{
	int n = str.length();
	int L, R, k;

	L = R = 0;
	for (int i = 1; i < n; ++i)
	{
		
		if (i > R)
		{
			L = R = i;

			while (R<n && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			R--;
		}
		else
		{
			
			k = i-L;

			if (Z[k] < R-i+1)
				Z[i] = Z[k];

		
			else
			{
				L = i;
				while (R<n && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
		}
	}
}

int main()
{
	string text = "GEEKS FOR GEEKS";
	string pattern = "GEEK";
	search(text, pattern);
	return 0;
}
