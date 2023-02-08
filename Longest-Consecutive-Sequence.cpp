//Program to find length of Longest Consecutive Sequence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int length=1;
    vector<int> arr={3,6,8,4,5,2};
    int n = 6;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
       if((arr[i]+1)==arr[i+1])
       {
        length++;
       }
    }
    cout<<"The length of Longest Consecutive Sub-Array is: "<<length;
   return 0;
}
//Time Complexity=O(nlog(n))
