#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    cout<<"Front of Queue is : "<<q.front()<<endl;//1
    q.push(6);
    cout<<"Front of Queue is : "<<q.front()<<endl;//1
    q.push(7);
    cout<<"Back of Queue is : "<<q.back()<<endl;//1
    cout<<"Size of queue: "<<q.size()<<endl;//3
    q.pop();
    q.pop();
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;//0
    if(q.empty())
    cout<<"Queue is empty!"<<endl;
    else
    cout<<"Queue is not empty!"<<endl;
    return 0;
}
/*
Front of Queue is : 1
Front of Queue is : 1
Back of Queue is : 7
Size of queue: 3
Size of queue: 0
Queue is empty!
*/