#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<bool> prime(n+1,true);
    vector<int> store;
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            store.push_back(i);
        }
        for(int j=2*i;j<n;j+=i){
            prime[j]=false;
        }
    }
    for(int i=0;i<store.size();i++)
    cout<<store[i]<<" ";
    return 0;
}