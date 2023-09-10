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
class Dog : public Animal{
    public :
    void printDog(){
         cout<<"Inside Dog"<<endl;
    }
   
};
class GermanShephard: public Animal{
    public :
    void printgerman(){
         cout<<"Inside GermanShephard"<<endl;
    }
};
int main(){
    Animal ob;
    ob.speak();
    Dog obje;
    obje.printDog();
    obje.speak();
    GermanShephard obj;
    obj.printgerman();
    obj.speak();
    return 0;
}