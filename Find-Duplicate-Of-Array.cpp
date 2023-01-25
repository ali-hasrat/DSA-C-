//Program to Find duplicate of an Array
#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[10]={1,2,3,4,2,1,4,5,6,5};
    cout<<"The duplicate array are: ";
    for (int i=0;i<10;i++)
    {
      for (int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}