#include<iostream>
using namespace std;

bool binarySearch(int arr[] , int start, int end, int key){
    int mid=start+(end-start)/2;
    if(start>end)
        return false;
    if(arr[mid]==key)
        return true;
    if(key>arr[mid])
        return binarySearch(arr, mid+1, end, key);
    else
        return binarySearch(arr, start, mid-1, key);
}

int main(){
    int n,num;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr=new int[n];//This is dynamic allocation, we also could have written int arr[n] but that would be static allocation
    cout<<"enter the array elements in sorted way : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>num;
    if(binarySearch(arr,0,n-1,num)){
        cout<<"Searched element is present "<<endl;
    }
    else{
        cout<<"Searched element not found"<<endl;
    }

    return 0;
}