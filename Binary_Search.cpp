#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;
        if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int evenIndex=binarysearch(even,6,6);
    cout<<"Index of 6 is "<<evenIndex<<endl;
    int oddIndex= binarysearch(odd,5,8);
    cout<<"Index of 8 is "<<oddIndex<<endl;
    return 0;
}