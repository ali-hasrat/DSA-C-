//Program to check whether the no. is Palindrome or not

#include<bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int rev=0;
    int temp=n;
    while(n!=0)
    {
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<rev<<endl;
    if(temp==rev)
    {
        cout<<"Yes Palindrome"<<endl;
    }
    else
    cout<<"Not Palindrome";
}
int main()
{
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    palindrome(n);
    return 0;
}
