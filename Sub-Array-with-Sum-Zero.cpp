//Program to find the count of largest sub-array having sum zero
#include <iostream>
using namespace std;
int maxLen(int arr[], int n)
{
	int max_len = 0;
	for (int i = 0; i < n; i++) 
    {
		int sum = 0;
		for (int j = i; j < n; j++) 
        {
			sum=sum+arr[j];
            
			if (sum == 0)
				max_len = max(max_len, j - i + 1);
		}
	}
	return max_len;
}
int main()
{
	int n,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the integers in array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
	cout << "Longest Sub-Array with Sum Zero: "<< maxLen(arr, n);
	return 0;
}

  