#include<iostream>
using namespace std;
//parent class
class Human{
    public:
    int height=52;
    int weight=74;
    int age=19;
    int getAge(){
        return age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};
//child class
class Male : public Human {
    public :
    string color="Blue";
    void sleep(){
        cout<<"male sleeping..."<<endl;
    }
};

int main(){
    Male obj;
    obj.setWeight(100);
    cout<<obj.age<<endl;//inherited form parent class Human
    cout<<obj.color<<endl;
    obj.sleep();
    cout<<obj.height<<endl;
    cout<<obj.weight<<endl;
    return 0;
}