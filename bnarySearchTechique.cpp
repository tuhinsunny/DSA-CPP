 #include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key)
        end--;
        else
        start++;
    }
    return -1;
}

int main(){
    int n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the Array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the number to be searched : ";
    cin>>k;
    if(binarySearch(arr,n,k)==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at "<<binarySearch(arr,n,k)<<"th index."<<endl;

    return 0;
}