// program to count Targeted sum
#include<iostream>
using namespace std;
int main()
{
    int Targeted_sum=7,count=0,n;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==Targeted_sum)
            {
                count++;
            }
        }
    }
    cout<<"The count of Targeted Sum:"<<count;
    return 0;
}

    
