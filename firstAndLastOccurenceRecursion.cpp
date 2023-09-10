#include<iostream>
using namespace std;
int binarySearchFirst(int arr[] , int start, int end , int key,int ans){
    int mid=start+(end-start)/2;
    
    if(start>end){
        return ans;
    }
    if(arr[mid]==key){
        ans=mid;
        return binarySearchFirst(arr, start, mid-1, key,ans);
    }
    else if(key>arr[mid]){
        return binarySearchFirst(arr, mid+1, end, key,ans);
    }
    else{
        return binarySearchFirst(arr, start, mid-1, key,ans);
    }
    return ans;
}
int binarySearchLast(int arr[] , int start, int end , int key,int ans){
    int mid=start+(end-start)/2;
    if(start>end){
        return ans;
    }
    if(arr[mid]==key){
        ans=mid;
        return binarySearchLast(arr, mid+1, end, key,ans);
    }
    else if(key>arr[mid]){
        return binarySearchLast(arr, mid+1, end, key,ans);
    }
    else{
        return binarySearchLast(arr, start, mid-1, key,ans);
    }
    return ans;
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
    int firstPosition = binarySearchFirst(arr, 0, n-1, num,-1);
    int lastPosition = binarySearchLast(arr, 0, n-1, num,-1);
    cout<<"First Occurence : "<<firstPosition<<endl;
    cout<<"Last Occurence : "<<lastPosition<<endl;
    return 0;
}