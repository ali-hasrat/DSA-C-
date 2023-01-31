//program to reverse 2-D Array or Matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"Enter the row and column of matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"The elements are: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
   cout<<"The Matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The Reverse of a Matrix is: "<<endl;
    for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//program to reverse a 1-D Array
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"The elements are: ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The Matrix is: "<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"The Reverse of a Matrix is: "<<endl;
    for(i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
    return 0;
}
