#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n : ";
    int n,x;
    cin>>n;
    int arr[n+1]={0};
    arr[0]=arr[1]=1;
    
    for(int i=2;i<n+1;i++){
        for(int j=0;j<i;j++){
            arr[i]+=arr[j]*arr[i-j-1];
        }
    }
    cout<<"nth catalan nmber is : "<<arr[n]<<endl;

    return 0;
}