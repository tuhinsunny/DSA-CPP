#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int* arr1=new int[len1];
    int* arr2=new int[len2];
    //copying the 1st part array elements into the first array
    int k=s;
    for(int i=0;i<len1;i++)
    arr1[i]=arr[k++];
    //copying the 2nd part array elements into the second array
    k=mid+1;
    for(int i=0;i<len2;i++)
    arr2[i]=arr[k++];

    //merging 2 sorted arrays 
    int i=0,j=0;
    k=s;//main array index
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j])
        arr[k++]=arr1[i++];
        else
        arr[k++]=arr2[j++];
    }
    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }
    //As our task is over we need to release dynamic memory manually
    delete []arr1;
    delete []arr2;
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //sort left part
    mergeSort(arr, s,mid);
    //sort right part
    mergeSort(arr, mid+1 , e);
    //merge the 2 arrays
    merge(arr, s, e);
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