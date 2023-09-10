#include<bits/stdc++.h>
using namespace std;

long long merge(long long arr[], long long start, long long end){
    long long mid=start+(end-start)/2;
    long long i=start;
    long long j=mid+1;
    vector<long long> temp;
    long long inv=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            //arr[i]>arr[j] condition for inversion
            inv+=mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(long long x=start; x<=end; x++)
    arr[x]=temp[x-start];
    return inv;
}

long long mergeSort(long long arr[], long long s, long long e){
    long long inv=0;
    long long mid=s+(e-s)/2;
    if(s>=e)
    return inv;
    inv+=mergeSort(arr, s, mid);
    inv+=mergeSort(arr, mid+1, e);
    inv+=merge(arr, s, e);
    return inv;
}

int main(){
    long long n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    long long* arr =  new long long[n];
    for(long long i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Number of Inversions : "<<mergeSort(arr, 0, n-1)<<endl;
    delete []arr;
    return 0;
}