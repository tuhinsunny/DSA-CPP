#include<iostream>
using namespace std;

int main(){
    int n= 5;
    int* p=&n;
    int** p2=&p;//double pointer
    cout<<"Printing p : "<<p<<endl;// 0x61ff08
    cout<<"Address of p : "<<&p<<endl;// 0x61ff04
    cout<<*p2<<endl;// 0x61ff08

    cout<<n<<endl;//5
    cout<<*p<<endl;//5
    cout<<**p2<<endl;//5

    cout<<&n<<endl;//0x61ff08
    cout<<p<<endl;//0x61ff08
    cout<<*p2<<endl;//0x61ff08

    

    return 0;
}