#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main(){
    int len;
    cout<<"Enter the size of the array : ";
    cin>>len;
    int arr[10000];
    cout<<"Enter the 0s and 1s in the array : "<<endl;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int i=0,j=len-1;
    while (i<j){
        if(arr[i]==0 && i<j)
        i++;
        if(arr[j]==1 && i<j)
        j--;
        if(arr[i]==1 && arr[j]==0 &&i<j)
        {
            swap(arr,i,j);
            i++;
            j--;
        }
        
    }

    cout<<"Sorted Array : "<<endl;
    for(int i=0;i<len;i++)
    cout<<arr[i]<<" ";

    return 0;
}