#include<iostream>
using namespace std;

void print(int arr[],int size,int start=0){//start is a default argument. If the value of start is passed it will take up the value otherwise it will be 0
    //we cannot write void print(int arr[],int size=0,int start) because default arguments should be started from rightmost side so start needs to be 0 first
    for(int i=start; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    print(arr,size);// 1 2 3 4 5
    print(arr, size, 2);//3 4 5
    //Output : 1 2 3 4 5
    //3 4 5
    return 0; 
}