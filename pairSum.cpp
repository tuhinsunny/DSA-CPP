#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the value of k : ";
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k)
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }

    return 0;
}