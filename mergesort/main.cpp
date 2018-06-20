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
    mergesort(a,0,n);
    cout<<"merged array:";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
void mergesort(int &a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
void Merge(int &a,int low,int high,int mid)
{
    int i=low,j=mid+1,k=0,temp[high-low+1];
    while(i<=mid && j<high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];

        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<high)
    {
        temp[k++]=a[j++];

    }
    for(i=low;i<high;i++)
        a[i]=temp[i-low];

}
