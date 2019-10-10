
// C++ program of a space optimized DP solution for
// 0-1 knapsack problem.
#include<bits/stdc++.h>
using namespace std;

// val[] is for storing maximum profit for each weight
// wt[] is for storing weights
// n number of item
// W maximum capacity of bag
// dp[W+1] to store final result
int KnapSack(int val[], int wt[], int n, int W)
{
	// array to store final result
	//dp[i] stores the profit with KnapSack capacity "i"
	int dp[W+1];

	//initially profit with 0 to W KnapSack capacity is 0
	memset(dp, 0, sizeof(dp));

	// iterate through all items
	for(int i=0; i < n; i++)
		//traverse dp array from right to left
		for(int j=W; j>=wt[i]; j--)
			dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]);
	/*above line finds out maximum of dp[j](excluding ith element value)
	and val[i] + dp[j-wt[i]] (including ith element value and the
	profit with "KnapSack capacity - ith element weight") */
	return dp[W];
}

// Driver program to test the cases
int main()
{
	int val[] = {7, 8, 4}, wt[] = {3, 8, 6}, W = 10, n = 3;
	cout << KnapSack(val, wt, n, W) << endl;
	return 0;
}

// This code is contributed by Gaurav Mamgain



//// C++ program of a space optimized DP solution for
//// 0-1 knapsack problem.
//#include<bits/stdc++.h>
//using namespace std;
//
//// val[] is for storing maximum profit for each weight
//// wt[] is for storing weights
//// n number of item
//// W maximum capacity of bag
//// mat[2][W+1] to store final result
//int KnapSack(int val[], int wt[], int n, int W)
//{
//	// matrix to store final result
//	int mat[2][W+1];
//	memset(mat, 0, sizeof(mat));
//
//	// iterate through all items
//	int i = 0;
//	while (i < n) // one by one traverse each element
//	{
//		int j = 0; // traverse all weights j <= W
//
//		// if i is odd that mean till now we have odd
//		// number of elements so we store result in 1th
//		// indexed row
//		if (i%2!=0)
//		{
//			while (++j <= W) // check for each value
//			{
//				if (wt[i] <= j) // include element
//					mat[1][j] = max(val[i] + mat[0][j-wt[i]],
//									mat[0][j] );
//				else		 // exclude element
//					mat[1][j] = mat[0][j];
//			}
//
//		}
//
//		// if i is even that mean till now we have even number
//		// of elements so we store result in 0th indexed row
//		else
//		{
//			while(++j <= W)
//			{
//				if (wt[i] <= j)
//					mat[0][j] = max(val[i] + mat[1][j-wt[i]],
//									mat[1][j]);
//				else
//					mat[0][j] = mat[1][j];
//			}
//		}
//		i++;
//	}
//
//	// Return mat[0][W] if n is odd, else mat[1][W]
//	return (n%2 != 0)? mat[0][W] : mat[1][W];
//}
//
//// Driver program to test the cases
//int main()
//{
//	int val[] = {7, 8, 4}, wt[] = {3, 8, 6}, W = 10, n = 3;
//	cout << KnapSack(val, wt, n, W) << endl;
//	return 0;
//}




