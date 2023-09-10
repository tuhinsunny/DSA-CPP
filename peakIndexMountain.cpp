#include<iostream>
using namespace std;

int peak(int arr[], int size){
    int start=0,end=size-1,mid;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1])
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
    cout<<"Peak Index of the Mountain Array is : "<<peak(arr, n);

    return 0;
}