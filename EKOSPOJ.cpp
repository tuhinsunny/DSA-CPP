#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int mid, int n, int m){
    int sumHeight=0;
    for(int i=0; i<n;i++){
        if(arr[i]>=mid){
            sumHeight+=arr[i]-mid;
        }
    }
    if(sumHeight>=m)
    return true;
    else
    return false;
}

int main(){
    int n,m;
    cout<<"enter the values of m and n "<<endl;
    cin>>n>>m;
    int arr[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int start=0,end,mid,ans=-1,maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    end=maxi;
    while(start<=end){
        mid=start+(end-start)/2;
        if(isPossible(arr, mid, n, m)){
            ans=mid;
            start=mid+1;
        }
        else
        end =mid-1;
    }
    cout<<"Ans = "<<ans<<endl;
    return 0;
}