#include<iostream>
using namespace std;

int main(){

    //pointer is created and is pointing to some garbage address 
    // int *ptr; //bad practice , should not be done 
    // cout<<*ptr<<endl;//Output : 1528349827

    // int i=5;

    // int *p=0;//type 1 initialization
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int *q=&i;//type2 initialization
    // cout<<q<<endl;
    // cout<<*q<<endl;


    int num=5;
    cout<<"Before Update num : "<<num<<endl;//5
    int a=num;
    a++;
    cout<<"After Update num : "<<num<<endl;//5

    int *ptr=&num;
    cout<<"Before Update num : "<<num<<endl;//5
    (*ptr)++;
    cout<<"After Update num : "<<num<<endl;//6

    //copying a pointer 
    int *p=ptr;
    cout<<ptr<<"---"<<p<<endl;//0x61ff00---0x61ff00
    cout<<*ptr<<"---"<<*p<<endl;//6---6

    int i=4;
    int *t=&i;
    // cout<<*t++<<endl;//4
    // cout<<(*t)++<<endl;//6
    cout<<"Before t : "<<t<<endl;//0x61fef8
    t=t+1;//increases the address stored in t by 4 bytes
    cout<<"After t : "<<t<<endl;//0x61fefc
    return 0;
}