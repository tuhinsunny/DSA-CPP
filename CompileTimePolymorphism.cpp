#include<iostream>
using namespace std;

// class A{
//     public :
//     //function overloading : Using the functions with same function name but different parameters
//     void hello(){
//         cout<<"hello Sunny"<<endl;
//     }
//     void hello(string name){
//         cout<<"hello Tuhin Sunny"<<endl;
//     }
//     int hello(string hey, int x){
//         cout<<"Hi this is sunny happiness"<<endl;
//         return x;
//     }
// };

class B{
    public :
    int a;
    int b;
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"Output : "<<val2-val1<<endl;//3
    }
    void operator() (){
        cout<<"mein Bracket hu : "<<this->a<<endl;//4
    }
};

int main(){

    B obj1, obj2;
    obj1.a=4;
    obj2.a=7; 
    obj1 + obj2;//obj1 points to this(current calling object) and obj2 is input argument
    obj1();//Overloading brackets


    // A obj;
    // obj.hello();
    // obj.hello("Tuhin");
    return 0;
}