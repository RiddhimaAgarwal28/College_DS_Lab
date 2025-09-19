#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            for(int j=i+1;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    cout<<"Array elements after deletion"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}