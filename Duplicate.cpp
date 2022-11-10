#include<iostream>
using namespace std;
int findDuplicate(int arr[], int size)
{
    int ans=0;
    //XOR all array elemnents
    for(int i=0; i<size; i++)
    {
        ans=ans^arr[i];
    }
    //XOR (1 to N-1)
    for(int i=1; i<size; i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{   
    int n;  //size of array
    int arr[50];
    cout<<"\nEnter Size";
    cin>>n;
    
    //Inputing values in array
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicate Value is"<<findDuplicate(arr,n);
}