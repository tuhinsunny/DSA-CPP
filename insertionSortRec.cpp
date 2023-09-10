#include<iostream>
using namespace std;

void insertionSort(int arr[], int startIndex, int n){
    if(startIndex>=n)
    return;
    int j;
    int temp=arr[startIndex];
    for(j=startIndex-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
            break;
        }
        arr[j+1]=temp;
        insertionSort(arr, startIndex+1, n);
}

int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, 1, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}