#include<iostream>
using namespace std;

int peak(int arr[], int start, int end){
    if(start>=end){
        return start;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]<arr[mid+1]){
        return peak(arr, mid+1, end);
    }
    else
    return peak(arr, start, mid);
    return start;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr=new int[n];//This is dynamic allocation, we also could have written int arr[n] but that would be static allocation
    cout<<"enter the array elements in sorted way : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Peak Index : "<<peak(arr,0,n-1)<<endl;

    return 0;
}