#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[10000];
    cout<<"Enter the 0s and 1s and 2s in the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
     for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1])
           {
               int tmp;
               tmp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tmp;
           }
       }
   }
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";


    return 0;
}