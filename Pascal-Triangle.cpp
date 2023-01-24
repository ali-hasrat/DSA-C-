// C++ program print pascal triangle using 2D-array
#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int i,j,n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
     {
        for(j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
         for(j=0;j<=i;j++) 
         {
            if(j==0 || j==i)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=arr[i-1][j-1] + arr[i-1][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
