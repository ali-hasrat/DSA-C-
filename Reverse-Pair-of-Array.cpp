// C++ program to count the pairs in array such that one element is reverse of another
#include<iostream>
using namespace std;
int main()
{   
    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;
    int i,A[m],count=0;
    cout<<"Enter the elements of the array:\n";
    for(i=0;i<m;i++)
    cin>>A[i];
    cout<<"Array:\n";
    for(i=0;i<m;i++)
    cout<<A[i]<<" ";
for(int i=0;i<m;i++)
{
    for(int j=i+1;j<m;j++)
    {
        if(A[i]>2*A[j] )
        count++;
    }
}
    cout<<"\nNo. of reverse pairs: "<<count;
    return 0;
}
