#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the size of first array"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements of array 1 in sorted order"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second array"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter the elements of array 2 in sorted order"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int res[n1+n2];
    int k=0,i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        res[k++]=a[i++];
        else 
        res[k++]=b[j++];
    }
    while (i < n1) {
            res[k++] = a[i++];
        }
        while (j < n2) {
            res[k++] = b[j++];
        }
    cout<<"Merged array"<<endl;
    for(int i=0;i<(n1+n2);i++)
    cout<<res[i]<<" "; 
}