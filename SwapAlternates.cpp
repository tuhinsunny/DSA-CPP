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
    cout<<"Enter the size of the array : ";
    int size;   
    cin>>size;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr,i,i+1);
        }
    }
    cout<<"Swapped array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}