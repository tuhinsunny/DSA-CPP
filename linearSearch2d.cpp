#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==target)
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    cout<<"Enter the elements of the 2d array : \n";
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cin>>arr[i][j];
    cout<<"Enter the target element : ";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4))
    cout<<"the target is present"<<endl;
    else
    cout<<"the target is not present"<<endl;

    return 0;
}