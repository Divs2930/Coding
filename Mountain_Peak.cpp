//mountain peak binary search
#include <iostream>

using namespace std;
int peakMountain(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if (arr[mid]<arr[mid+1])   // matlab left line pe hain increasing sorted side pe
         start=mid+1;
        else                        // matlab right line pe decreasing sorted side hai ya fir peak element hai
        {
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    //cout<<"Peak element in mountain is-: "<<end;
    return start;
}

int main()
{
    int arr[50];
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements of Array mountain form-:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //peakMountain(arr,n);
    cout<<"Peak element index in mountain is-: "<<peakMountain(arr,n);

    return 0;
}