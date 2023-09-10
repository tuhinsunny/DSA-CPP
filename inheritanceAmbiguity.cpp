#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};
class B {
    public :
    void func(){
        cout<<"I am B"<<endl;
    }
};
// both the above functions of the 2 classes have same name
class C: public A, public B{

};

int main(){
    C obj;
    //to resolve ambiguity use the scope resolution operator ::
    obj.A::func();//I am A
    obj.B::func();//I am B
    return 0;
}