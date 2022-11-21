#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int k)
{
    int start=0, end=n-1;
    int mid=start+(end-start)/2;
    int ans= -1;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            end=mid-1;
        }
        else if(k<arr[mid])
        end=mid-1;
        else if(k>arr[mid])
        start=mid+1;
      mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int k)
{
    int start=0, end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            start=mid+1;
        }
        else if(k<arr[mid])
        end=mid-1;
        else if(k>arr[mid])
        start=mid+1;
      mid=start+(end-start)/2;
    }
    return ans;
}

void firstAndLastOccurrence(int arr[], int n, int k)
{
    pair<int,int> p;
    p.first=firstOccurrence(arr,n,k);
    p.second=lastOccurrence(arr,n,k);
    cout<<"\nFirst occurrence index no is--: "<<p.first<<"\nlast occurrence index no is--: "<<p.second;

}

int main()
{
    int n,k;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int* arr=new int[n]; //Dynamic Array
    cout<<"\nEnter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the the k of which you want to find the occurrence- ";
    cin>>k;

    firstAndLastOccurrence(arr,n,k);
    delete[] arr;
    return 0;
}