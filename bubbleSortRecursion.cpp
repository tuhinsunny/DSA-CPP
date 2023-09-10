#include<iostream>
using namespace std;

void bubbleRec(int arr[], int n){
    //base case When array is sorted
    if(n==0 || n==1) 
    return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    //the 1st round is over and the highest element goes at the end
    //now leave everything to recursion
    return bubbleRec(arr,n-1);
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
    bubbleRec(arr, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}