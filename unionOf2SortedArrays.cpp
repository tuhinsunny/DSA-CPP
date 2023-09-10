#include<iostream>
using namespace std;

void unionSet(int a[],int m , int b[],int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

void intersection(int a[], int m , int b[], int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }  
        else{
            j++;
        }
    }
}

int main(){
    cout<<"Enter the size of the 2 arrays : ";
    int m,n;
    cin>>m>>n;
    cout<<"Enter the array elements of 1st array : "<<endl;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the array elements of 2nd array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    unionSet(a,m,b,n);
    cout<<endl;
    intersection(a,m,b,n);
    return 0;
}