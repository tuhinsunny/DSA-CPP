#include<iostream>
using namespace std;

class Animal {
    public :
    int age;
    int height;

    void speak(){
        cout<<"Animals can speak ";
    }
};
class Dog : public Animal{

};
class GermanShephard: public Dog{

};
int main(){
    GermanShephard obj;
    obj.speak();
    cout<<obj.age<<endl;
    return 0;
}