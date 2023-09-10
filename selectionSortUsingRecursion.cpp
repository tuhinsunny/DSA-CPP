#include<iostream>
using namespace std;

void selectionRec(int arr[], int beginIndex, int n){
    if(beginIndex>=n-1)
    return;
    int minIndex=beginIndex;
    for(int i=beginIndex+1;i<n;i++){
        if(arr[i]<arr[minIndex])
        minIndex=i;
    }
    swap(arr[minIndex], arr[beginIndex]);
    selectionRec(arr, beginIndex+1, n);

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
    selectionRec(arr, 0, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}