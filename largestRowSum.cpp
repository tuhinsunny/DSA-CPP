#include<iostream>
#include<climits>
using namespace std;

void maxRowSum(int arr[][4],int row, int col){
    int maxSum=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            rowIndex=i;
        }
    }
    cout<<"Row with the Largest Row Sum : "<<rowIndex<<endl;
    cout<<"Largest Row Sum : "<<maxSum<<endl;
}

int main(){
    int arr[3][4];
    cout<<"Enter the elements of the 2d array : \n";
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cin>>arr[i][j];
    maxRowSum(arr,3,4);

    return 0;
}