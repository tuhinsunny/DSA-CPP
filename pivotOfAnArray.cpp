//The array is sorted and rotated
#include<iostream>
using namespace std;

int pivot(int arr[] , int size){
    int start=0,end=size-1,mid;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        start=mid+1;
        else
        end=mid;
    }
    return start;
}

int main(){
    cout<<"Enter the size of the Array : ";
    int n;
    cin>>n;
    cout<<"Enter the array elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Pivot of the Sorted Rotated Array is : "<<pivot(arr, n);
    return 0;
}