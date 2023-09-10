#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int nsearch ){
    if(arr[0]==nsearch)
    return true;
    if(size<=0)
    return false;
    return isPresent(arr+1,size-1,nsearch);
}

int main(){
    int n,num;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr=new int[n];
    cout<<"enter the array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>num;
    if(isPresent(arr, n , num)){
        cout<<"Searched element is present "<<endl;
    }
    else
    cout<<"Searched element not found"<<endl;

    return 0;
}