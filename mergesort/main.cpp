#include <iostream>

using namespace std;

int main()
{
    int i,n,a[1000];
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
            cin>>a[i];
    mergesort(a);
    cout<<"merged array:";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
