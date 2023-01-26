//you are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the No. of Rows and Column:"<<endl;
    cin>>n>>n;
    int arr[n][n];
    cout<<"Enter the Elements of array:"<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
        cin>>arr[i][j];
        }
    }
    cout<<"The Matrix is:"<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
     for (int i=0;i<n/2;i++) 
     { 
        for (int j=i;j<n-i-1;j++) 
        { 
        // Swapping elements after each iteration in Clockwise direction
            int temp=arr[i][j]; 
            arr[i][j]=arr[n-1-j][i]; 
            arr[n-1-j][i]=arr[n-1-i][n-1-j]; 
            arr[n-1-i][n-1-j]=arr[j][n-1-i]; 
            arr[j][n-1-i]=temp; 
        } 
     }
    cout<<"The Matrix after 90 degree rotation:"<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}