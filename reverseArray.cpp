#include<iostream>
using namespace std;
void swap(int arr[],int start,int end){
    int c;
    c=arr[start];
    arr[start]=arr[end];
    arr[end]=c;
}
int main(){
    int arr[100000];
    int a[100000],size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Reversed Array : "<<endl;
    // int k=size-1;
    // for(int i=0;i<size;i++){
    //     a[i]=arr[k];
    //     k--;
    // }
    // for(int i=0;i<size;i++)
    // cout<<a[i]<<" ";

    //Another Way without using another array
    int start=0,end=size-1;
        while(start<=end){
            swap(arr,start,end);
            start++;
            end--;
        }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}