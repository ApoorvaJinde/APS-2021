#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    return ((x>y)?y:x)>z?z:((x>y)?y:x);
}

int editDistDP(string str1, string str2, int m, int n)
{
	int dp[m + 1][n + 1],i,j;
	for (i = 0; i <= m; i++)
    {
		for (j = 0; j <= n; j++)
		{
			if (i == 0)
				dp[i][j] = j;

			else if (j == 0)
				dp[i][j] = i;

			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j]
					= 1
					+ min(dp[i][j - 1], // Insert
							dp[i - 1][j], // Remove
							dp[i - 1][j - 1]); // Replace
		}
	}

	// printing dp matrix
	for (i = 0; i <= m; i++)
    {
		for (j = 0; j <= n; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
	return dp[m][n];
}

int main()
{

	string str1,str2;
	cout<<"Enter string 1 : ";
	cin>>str1;
    cout<<"Enter string 2 : ";
	cin>>str2;
	int n = editDistDP(str1, str2, str1.length(), str2.length());
	cout <<"Minimum edits required : "<<n<<endl;

	return 0;
}
