#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the size of first array"<<endl;
    cin>>n1;
    vector<int>a(n1);
    cout<<"Enter the elements of first array in sorted order"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second array"<<endl;
    cin>>n2;
    vector<int>b(n2);
    cout<<"Enter the elements of second array in sorted order"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    vector<int>c(n1+n2);
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else if(a[i]>b[j])
        c[k++]=b[j++];
        else
        { 
        c[k++]=a[i++];
        j++;
        }
    }
    while(i<n1)
    c[k++]=a[i++];
    while(j<n2)
    c[k++]=b[j++];
    for(int z=0;z<k;z++)
    cout<<c[z]<<" ";
}