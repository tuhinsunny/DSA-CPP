#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;

    if(true){
        int a =2;//this a can be used only in this block
        cout<<a<<endl;
    }
    cout<<a<<endl;
    int i= 5;
    for(int i=1;i<=6;i++)
    cout<<"Turit"<<endl;
    for(;i<=6;i++)//as i is not initialized i this block it takes the original value of i outside the block
    cout<<"Hello"<<endl;
    return 0;
}