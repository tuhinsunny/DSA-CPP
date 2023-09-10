#include<iostream>
using namespace std;
//Using Indexes

void merge(int arr[], int start, int end){//Merging in a single array
    int mid=start+(end-start)/2;
    int i=start;
    int j=mid+1;
    int k=start;//for new array indexing
    int* a=new int[end+1];//created new array to put sorted elements
    while(i<=mid && j<=end){
        if(arr[i]<arr[j])
            a[k++]=arr[i++];
        else
            a[k++]=arr[j++];
    }
    while(i<=mid){
        a[k++]=arr[i++];
    }
    while(j<=end){
        a[k++]=arr[j++];
    }
    //copying the new array array into old array
    for(int i=start;i<=end;i++){
        arr[i]=a[i];
    }
    //releasing the heap memory
    delete []a;
}

void mergeSort(int arr[], int s, int e){
    int mid=s+(e-s)/2;
    if(s>=e)
    return;
    //sort the first part of the array
    mergeSort(arr, s, mid);
    //sort the second part of the array
    mergeSort(arr, mid+1, e);
    //merge
    merge(arr,s,e);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int* arr =  new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergeSort(arr, 0, n-1);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}