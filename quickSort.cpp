#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot =arr[start];
    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot)
        cnt++;
    }
    //placing pivot at right position
    int pivotIndex = start + cnt;
    swap(arr[pivotIndex],arr[start]);

    //left and right wala part sambhal lete hain
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    if(start>=end)//base case
    return;
    int p= partition(arr, start, end);//finding the partition
    quickSort(arr, start, p-1);//sorting the 1st part recursively
    quickSort(arr, p+1, end);//sorting the 2nd part recursively
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int* arr= new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quickSort(arr, 0, n-1);
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    delete []arr;

    return 0;
}