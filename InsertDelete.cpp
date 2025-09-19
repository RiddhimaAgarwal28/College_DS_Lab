#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele,pos;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n+1];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the position and element to insert"<<endl;
    cin>>pos>>ele;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    cout<<"Updated array after insertion"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element and position to delete"<<endl;
    cin>>pos>>ele;
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"Updated array after deletion"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
  return 0;  
}
