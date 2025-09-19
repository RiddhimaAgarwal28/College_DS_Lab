#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }
    cout<<sum<<endl;
}