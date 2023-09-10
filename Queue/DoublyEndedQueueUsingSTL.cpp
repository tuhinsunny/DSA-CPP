#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(20);
    cout<<d.front()<<endl;//12
    cout<<d.back()<<endl;//20

    d.pop_front();
    cout<<d.front()<<endl;//20
    cout<<d.back()<<endl;//20

    d.pop_back();
    if(d.empty()){
        cout<<"Queue is empty!"<<endl;
    }

    return 0;
}