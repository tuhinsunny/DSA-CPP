#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int s, int e){
    int mid=s+(e-s)/2;
    int i=s,j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }
}

void mergeSort(vector<int>& arr, int s, int e){
    if(s>=e)
    return;
    int mid=s+(e-s)/2;
    mergeSort(arr, 0, mid);
    mergeSort(arr, mid+1 ,e);
    merge(arr, s, e);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the array elements : "<<endl;
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    mergeSort(arr,0 ,n-1);
    cout<<"Sorted array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}