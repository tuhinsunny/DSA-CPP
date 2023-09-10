#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int mid,ans=-1;
    int s=0,e=-1,sum;
    for(int i=0;i<n;i++)
    e=max(e,arr[i]);
    while(s<=e){
        mid=s+(e-s)/2;
        sum=0;
        for(int i=0;i<n;i++){
            if(mid>arr[i])
            sum+=0;
            else
            sum+=(arr[i]-mid);
        }
        if(sum>m)
        s=mid+1;
        else if(sum<m)
        e=mid-1;
        else{
        ans=mid;
        s++;
        e--;
    }
    }
    cout<<ans;
    return 0;
}