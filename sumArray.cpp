#include<iostream>
using namespace std;

int main(){
    int arr[100];
    cout<<"Enter the size of the array : ";
    int size;
    cin>>size;
    cout<<"Enter the elements of the array : "<<endl;
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of all the array elements is : "<<sum<<endl;

    return 0;
}