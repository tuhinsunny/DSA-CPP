#include<iostream>
using namespace std;

void EvenOdd(int num){
    if(num%2==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
}

int main(){
    cout<<"Enter the Number of testcases : ";
    int t;
    cin>>t;
    while(t-->0)
    {
        cout<<"Enter the Number : ";
        int n;
        cin>>n;
        EvenOdd(n);
    }
    return 0;
}