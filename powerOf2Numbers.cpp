#include<iostream>
using namespace std;

void power(int a ,int b){
    int p=1;
    for(int i=1;i<=b;i++)
    p*=a;
    cout<<a<<" to the power "<<b<<" is : "<<p<<endl;
}

int main(){
    cout<<"Enter 2 numbers : ";
    int a,b;
    cin>>a>>b;
    power(a,b);

    return 0;
}