#include<iostream>
using namespace std;

void update(int ** p2){
    //Remove comment from each and add again to check for different cases
    //p2 = p2 + 1; // No change in before or after
    //*p2 = *p2 + 1;// Value of p changes
    //**p2 = **p2 + 1; //Value of i increase by 1
}

int main(){
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<"Before "<<i<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<p2<<endl;
    update(p2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;

    return 0;
}