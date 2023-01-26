//Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include <iostream>  
using namespace std;
// Function that finds the largest sum contiguous array  
int maxSubArraySum(int a[], int size)  
{  
    int current_sum = 0, maximum_sum = 0;  
   
    for (int i = 0; i < size; i++)  
    {  
        current_sum = current_sum + a[i];  

        if (current_sum > maximum_sum)  
           maximum_sum = current_sum;  
   
        if (current_sum< 0)  
           current_sum = 0;  
    }  
    return maximum_sum;  
}  
int main()  
{  
     int i,j,n;
    cout<<"Enter the No. of Rows and Column:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of array:"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max_sum = maxSubArraySum(arr, n);  
    cout<<"Maximum sum of the contiguous array is :"<< max_sum;  
    return 0;  
}
//Time Complexity= O(n)
//Auxiliary Space Complexity = O(1) 