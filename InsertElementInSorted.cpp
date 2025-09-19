#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele,pos=-1;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    int a[n+1];
    cout<<"Enter the elements of array in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be inserted"<<endl;
    cin>>ele;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        if(a[i]<=ele)
        {
          a[i+1]=ele;
          break;
        }
    }
    cout<<"Updated array after insertion"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }

}
