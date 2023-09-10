#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Tuhin");
    q.push("Sunny");
    q.push("Chandra");
    cout<<"Front element : "<<q.front()<<endl;//Tuhin
    q.pop();
    cout<<"Front element : "<<q.front()<<endl;//Sunny
    cout<<"Size after Pop : "<<q.size()<<endl;//2

    return 0;
}