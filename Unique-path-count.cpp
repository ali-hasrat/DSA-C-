//Program to count all possible paths from top left to bottom right
#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
	if (m == 1 || n == 1)
		return 1;    //As when the row and column is equal to 1 then only one way is possible

	return uniquePaths(m - 1, n)+ uniquePaths(m, n - 1); //Recursion
	// + uniquePaths(m-1, n-1); This addition is required if we could move diagnoally
	
}
int main()
{
	int m,n;
	cout<<"Enter the row and column of grid: ";
	cin>>m>>n;
	cout<<"The total possible no. of ways to reach destination equal to: ";
	cout << uniquePaths(m, n);
	return 0;
}
// Time complexity=O(2^n)
// Space complexity=O(m+n)

//Program to count all possible Unique paths from top left to bottom right
#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
    {
	int uniquePaths = 1;
		for (int i = n; i < (m + n - 1); i++) 
    	{
			uniquePaths *= i;
			uniquePaths /= (i - n + 1);    //concept of combinatorics used here
		}
		return uniquePaths;
    }
int main()
	{
	int m,n;
	cout<<"Enter the row and column of grid: ";
	cin>>m>>n;
	cout<<"The total possible no. of ways to reach destination equal to: ";
	cout << uniquePaths(m, n);
	return 0;
	}
// Time complexity=O(n)
// Space complexity=O(1)