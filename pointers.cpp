#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;
    //address of Operator - &
    cout<<"Address of num is : "<<&num<<endl;
    int *ptr = &num;//Created a pointer ptr and stored the address of num
    cout<<"Value at ptr : "<<*ptr<<endl;//value at address ptr ->> 5
    cout<<"Address of num stored at ptr : "<<ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;

    cout<<"Size of Integer is : "<<sizeof(num)<<endl;
    cout<<"Size of Pointer is : "<<sizeof(ptr)<<endl;
    
    double n = 4.3;
    double *p=&n;
    cout<<"Size of double : "<<sizeof(n)<<endl;
    cout<<"Size of Pointer : "<<sizeof(p)<<endl;

    return 0;
}