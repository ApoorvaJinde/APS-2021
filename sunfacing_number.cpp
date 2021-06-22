/*
Given an array representing heights of buildings. The array has buildings from left to right as shown in below diagram, count number of buildings facing the sunset. 
It is assumed that heights of all buildings are distinct.
*/
#include <iostream>
using namespace std;

int countBuildings(int arr[], int n)
{
	
	int count = 1;
	int curr_max = arr[0];
	for (int i = 1; i < n; i++) 
  {
		if (arr[i] > curr_max || arr[i] == curr_max) 
    {
			count++;
			curr_max = arr[i];
		}
	}
	return count;
}

int main()
{
	int arr[] = { 7, 4, 8, 2, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << countBuildings(arr, n);
	return 0;
}
