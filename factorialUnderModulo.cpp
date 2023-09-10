#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the values of n and p : ";
    int n,p;
    cin>>n>>p;
    long long f=1;
    for(int i=1;i<=n;i++){
        f=(f*i)%p;
    }
    cout<<"Factorial under modulo is : "<<f<<endl;

    return 0;
}