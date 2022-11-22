#include <iostream>

using namespace std;
int binarySearch(int arr[],int start,int end, int key)
{
    int mid= start+(end-start)/2;
    while(start<=end)
    {  
      
        if(key==arr[mid])
        return mid;
      
      else if (key>=arr[mid])
      {
        start=mid+1;
      }
      else
      end=mid-1;
    mid= start+(end-start)/2;
    }
   return -1;
}

int getPivot(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid= start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else 
        end=mid;
        mid= start+(end-start)/2;
    }
return start;
}

int findKey(int arr[],int n,int k)
{
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
       return binarySearch(arr,pivot,n-1,k);
    }
    else
     return binarySearch(arr,0,pivot-1,k);
}
int main()
{
    int k;
    int arr[6]={4,5,7,1,2,3};
    cout<<"Enter the number looking for-:";
    cin>>k;
    int key=findKey(arr,6,k);
    cout<<"Element index is-:"<<key;
    return 0;
}