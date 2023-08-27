// Program to find Trailing Zeroes in Factorial of any number.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Naive Mathod
//Time Complexity = Theta(n)

/*int countzeroes(int n)
{
    int fact=1;
    for(int i=2; i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial:"<<fact<<endl;
    // return fact;

    int res=0;
    while(fact%10==0)
    {
        res++;
        fact=fact/10;
    }
    cout<<"No. of triling Zeroes: "<<res;
    // return res;
}*/

//Efficient Method
//Time Complexity= Theta(log n)

/*int trailingZeroes(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
       res=res+n/i; 
    }
    cout<<"No. of triling Zeroes: "<<res;
}*/
int main()
{
    int n;
    cout<<"Enter the No:";
    cin>>n;

    // countzeroes(n)
    // trailingZeroes(n);

    return 0;
}
