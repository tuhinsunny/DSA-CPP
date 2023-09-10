#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    //pushing
    s.push(2);
    s.push(3);

    //poping
    s.pop();//3 is poped out

    //printing top element
    cout<<"Top element of the stack : "<<s.top()<<endl;//2
    cout<<s.size()<<endl;//1 as it is the size of the stack
    if(s.empty())
    cout<<"Empty stack"<<endl;
    else
    cout<<"Stack is not empty"<<endl;
    return 0;
}