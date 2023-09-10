#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    cout<<"Enter the size of the array : ";
    int n,x;
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Array ELements : "<<endl;
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}