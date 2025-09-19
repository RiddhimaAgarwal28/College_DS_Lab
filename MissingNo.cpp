#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,missing=-1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the first n natural numbers"<<endl;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int totalSum=n*(n+1)/2;
    cout<<"Missing no. is "<<totalSum-sum<<endl;
}
