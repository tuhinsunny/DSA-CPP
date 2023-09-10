#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the array elements : "<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    //Technique 1 : Using Sorting 
    // sort(arr.begin(), arr.end());
    // for(int i :arr){
    //     cout<<i<<" ";
    // }
    
    //Technique 2 : Using 2 pointer method
    int i=0,j=0;
    while(i<arr.size()){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}