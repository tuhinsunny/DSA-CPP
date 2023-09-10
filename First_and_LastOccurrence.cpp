#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key,bool first){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            if(first)
            end=mid-1;
            else
            start=mid+1;
        }
        else if(key>arr[mid])
        start=mid+1;
        else
        end=mid-1;
    }
    return ans;
}

int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    int arr[100000];
    cout<<"Enter the array elements in sorted way : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    int key;
    cin>>key;
    int firstOccur=binarySearch(arr,n,key,true);
    int lastOccur=binarySearch(arr,n,key,false);
    cout<<"First Occurence : "<<firstOccur<<endl;
    cout<<"Last Occurence : "<<lastOccur<<endl;

    return 0;
}