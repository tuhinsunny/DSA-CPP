#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else
    return isSorted(arr+1,size-1);
}

int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int* arr = new int[size];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,size)){
        cout<<"The array is sorted "<<endl;
    }
    else{
        cout<<"The array is not sorted "<<endl;
    }

    return 0;
}