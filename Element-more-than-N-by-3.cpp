// C++ program to find Majority element in an array
#include <iostream>
using namespace std;
void MajorityEle(int arr[], int n)  // Function to find Majority element in an array
 {
	int c = 0;
    cout<<"The elements that appear more than [n/3] times:"<<endl;
	for (int i = 0; i < n; i++) 
    {
		int count = 0;
		for (int j = i; j < n; j++)
        {
			if (arr[i] == arr[j]) 
            {
				count++;
			}
		}
        if (count > (n / 3)) 
        {
			cout << arr[i] << " ";
			c = 1;
		}
	}
	if (!c)
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

//Time Complexity: O(n*n)
//Auxiliary Space Complexity: O(1)
