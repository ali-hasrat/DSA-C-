//Program to find total no.s of Pairs which is divisible by 60
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the total no. of Songs: ";
    cin>>n;
    int time[n];
    cout<<"Enter the corresponding time duration of Song: ";
    for(int i=0;i<n;i++)
    cin>>time[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((time[i]+time[j])%60==0)
            {
                count++;
            }
        }
    }
    cout<<"The no. of Pairs of Song divided by 60 is: "<<count;
    return 0;
}