#include<iostream>
using namespace std;

int score = 15;//Global variable can be accessed anywhere
void run1(){
    cout<<score<<endl;
}
void run2(){
    cout<<score<<endl;
}

int main(){
    cout<<"Score: "<<score<<endl;
    run1();
    run2();
    return 0;
}