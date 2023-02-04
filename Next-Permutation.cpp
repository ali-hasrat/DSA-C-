//Program to find next Permutation of Array
#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the present Permutation:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    next_permutation(arr,arr+n);  //using in-built function of C++
    cout<<"The next Permutation is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}