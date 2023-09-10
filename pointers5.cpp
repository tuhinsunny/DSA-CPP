#include<iostream>
using namespace std;

void print(int *ptr){
    cout<<*ptr<<endl;//5
    cout<<ptr<<endl;//Address of 5 will be printed
}
//we can update value but not address

// void update(int *p){
//     p=p+1;
// }

void update(int *p){
    *p=*p+1;
}

int main(){
    int value=5;
    int *p = &value;
    //print(p);
    /*cout<<"Before update : "<<p<<endl;//0x61ff08
    update(p);
    cout<<"After update : "<<p<<endl;//0x61ff08*/

    cout<<"Before Update : "<<*p<<endl;//5
    update(p);
    cout<<"After Update : "<<*p<<endl;//6

    return 0;
}