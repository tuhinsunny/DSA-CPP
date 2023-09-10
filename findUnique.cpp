/*
https://www.codingninjas.com/codestudio/problems/find-unique_625159
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the Array : ";
    int n;
    cin>>n;
    int arr[n],ans=0;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans=ans^arr[i];
    }
    cout<<"Unique Number is : "<<ans<<endl;
    return 0;
}
