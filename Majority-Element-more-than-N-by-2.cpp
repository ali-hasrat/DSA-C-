// C++ program to find majority element is the element that appears more than ⌊n / 2⌋ times
#include <iostream>
using namespace std;
void MajorityEle(int arr[], int n)  // Function to find Majority element in an array
{
	int maxCount = 0;
	int index = -1; // sentinels
    cout<<"The majority element that appears more than [n/2] times: "<<endl;
	for (int i = 0; i < n; i++) 
    {
		int count = 0;
		for (int j = 0; j < n; j++) 
        {
			if (arr[i] == arr[j])
				count++;
		}
		if (count > maxCount)   // update maxCount if count of current element is greater
        {
			maxCount = count;
			index = i;
		}
	}
    if (maxCount > n / 2)  // if maxCount is greater than n/2 return the corresponding element
		cout << arr[index] << endl;
    else
		cout << "No Majority Element" << endl;
}
int main()
{
	int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    MajorityEle(arr, n);    // Function calling
	return 0;
}
