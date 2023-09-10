//https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array : ";
    int n,ans=0;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    ans=ans^arr[i];
    for(int i=0;i<n;i++)
    ans=ans^i;
    cout<<"The duplicate number in the array is : "<<ans<<endl;
    return 0;
}