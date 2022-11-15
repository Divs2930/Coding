#include<iostream>
#include<climits>
using namespace std;

bool Linear_Search(int arr[],int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(key==arr[i])
         return 1;

    }
  return 0;
}


int main()
{   
    int n,key;
    int arr[50];
    cout<<"\nEnter Size";
    cin>>n; 
    
    //Inputing values in array
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nNow enter the value to be find-:";
    cin>>key;
    
    bool found=Linear_Search(arr,n,key);

    if(found)
    {
        cout<<"\nValue is Present";
    }
    else 
    cout<<"\nValue is absent";

 return 0;
}