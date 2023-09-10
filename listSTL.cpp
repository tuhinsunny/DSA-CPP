#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    list<int> li(l);//list l will be copied
    list<int> m(5,100);// 5 elements and each initialized with 100
    for(int i:m)
    cout<<i<<" ";//100 100 100 100 100
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    cout<<i<<" ";//2 1
    cout<<endl;
    //l.erase(l.begin(),l.end());
    l.erase(l.begin());//only 1st element deleted
    cout<<"After Erase : \n";
    for(int i:l)
    cout<<i<<" ";//1
    cout<<endl;
    cout<<"Size of the List : "<<l.size()<<endl;//1

    return 0;
}