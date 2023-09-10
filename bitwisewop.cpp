#include<iostream>
using namespace std;

int main(){
    int a =4,b=6;
    cout<<"a&b : "<< (a&b)<< endl;
    cout<<"a|b : "<< (a|b)<< endl;
    cout<<"a^b : "<< (a^b)<< endl;
    cout<<"~a : "<< (~a)<< endl;

    //for right shift divide by 2
    //for left shift multiply by 2

    cout<< (17>>1) <<endl;//right shift
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;//left shift
    cout<< (21<<2) <<endl;


    return 0;
}