#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

void print(int ans[],int len){
    cout<<"Merged Sorted array : "<<endl;
    for(int i=0;i<len;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    cout<<"Enter the size of the arrays : ";
    int m,n;
    cin>>n>>m;
    int arr1[n],arr2[m],arr3[m+n];
    cout<<"Enter the 1st array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"Enter the 2nd array elements : "<<endl;
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    merge(arr1,n,arr2,m,arr3);
    print(arr3,m+n);
    return 0;
}