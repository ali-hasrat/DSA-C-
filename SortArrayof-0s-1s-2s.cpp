//program to sort an array of 0's ,1's and 2's.
#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[10]={1,2,2,0,1,0,0,1,2,0};
    cout<<"The Sorted array is:";
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-1;j++)
        {
             if(arr[i]<arr[j])
                {
                    int a=0;
                    a=arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }
        }
    }
    cout<<"The sorted matrix is :\n";
    for(i=0;i<10;i++)
        {
          cout<<arr[i]<<" ";
        }
     return 0;
}