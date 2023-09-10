#include<iostream>
using namespace std;

long long power(int a, int b,int p,int i){
    if(i>b)
    return p;
    return power(a,b,p*a,i+1);
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<power(a,b,1,1)<<endl;

    return 0;
}