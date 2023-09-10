#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[10000];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int sum=0;
    for(int i=0;i<size;i++)
    sum+=arr[i];
    cout<<"Sum of all elements in the array : "<<sum<<endl;
    return 0;
}