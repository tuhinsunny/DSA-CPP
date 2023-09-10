//finding the sum of array elements using recursion
#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
    if(size==0)
    return 0;
    return arr[0]+sumArray(arr+1,size-1);
}

int main(){
    int size;
    cin>>size;
    int* arr= new int[size];
    cout<<"enter array elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array Elements : "<<sumArray(arr,size)<<endl;

    return 0;
}