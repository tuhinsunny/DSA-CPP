#include<iostream>
using namespace std;

class Animal {
    public :
    int age;
    int height;

    void speak(){
        cout<<"Animals can speak "<<endl;
    }
};
class Dog{
    public :
    void bark(){
        cout<<"I do bhau bhau "<<endl;
    }
};
//species is inheriting both the classes Animal and Dog
class species: public Animal,public Dog{

};
int main(){
    species obj;
    obj.speak();
    obj.bark();
    return 0;
}