#include<iostream>
using namespace std;

int main(){
    int arr[50];
    fill_n(arr,50,2); //filling all the 50 values as 2
    for(int i=0;i<50;i++)
    cout<<arr[i]<<endl;
    
    return 0;
}