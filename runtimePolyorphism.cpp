#include<iostream>
using namespace std;

class Animal {
    public :
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class dog: public Animal{ //inheriting from parent class Animal
    public :
    void speak() {
        cout<<"Barking "<<endl;
    }
};

int main(){
    //function overriding
    dog obj;
    obj.speak();//Barking
    return 0;
}