#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
     mid=start+(end-start)/2;
    }
    return -1;

}

int main()
{
    int arr[50];
    int n,key;
    cout<<"\nEnter the size of array";
    cin>>n;
    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the Number you are looking for -- ";
    cin>>key;

    int index=binarySearch(arr,n,key);
    cout<<"Index is-- "<<index;
    return 0;

}
