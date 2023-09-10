#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Tuhin");
    s.push("Sunny");
    s.push("Guddu");
    cout<<"Top Element : "<<s.top()<<endl;//Guddu
    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;//Sunny
    cout<<"Size of Stack : "<<s.size()<<endl;//2
    cout<<"Empty or Not : "<<s.empty()<<endl;//0 which means false
    

    return 0;
}