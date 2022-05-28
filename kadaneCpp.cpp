#include<iostream>
#include<climits>
using namespace std;

int contiguousSubArray(int n[], int x)
{
	int far = INT_MIN, end = 0;

	for (int p = 0; p < x; p++)
	{
		end = end + n[p];
		if (far < end)
			far = end;

		if (end < 0)
			end = 0;
	}
	return far;
}
int main()
{
	int n[] = {-3, -2, 1, 2, 3, -4, -5, -1};
	int z = sizeof(n)/sizeof(n[0]);
	int total = contiguousSubArray(n, z);
	cout << "The Maximum sum of a contiguous Subarray is " << total;
	return 0;
}

