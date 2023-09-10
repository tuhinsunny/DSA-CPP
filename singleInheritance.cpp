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
int main(){
    Dog obj;
    obj.speak();
    cout<<obj.age<<endl;
    return 0;
}