#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);//2 1
    for(int i:d)
    cout<<i<<" ";//2 1
    cout<<endl;
    //d.pop_back();//2
    // d.pop_front();//1
    // for(int i:d)
    // cout<<i<<" ";
    // cout<<endl;

    cout<<"Element at 1st Index : "<<d.at(1)<<endl;//1
    cout<<"Element at 1nd Index : "<<d[1]<<endl;//1
    cout<<"Front : "<<d.front()<<endl;//2
    cout<<"Back : "<<d.back()<<endl;
    cout<<"Empty or Not : "<<d.empty()<<endl;

    cout<<"Before Erase Size : "<<d.size()<<endl;//2
    d.erase(d.begin(),d.begin()+1);//2 is erased
    cout<<"After Erase Size : "<<d.size()<<endl;//1
    for(int i:d)
    cout<<i<<" ";//1
    cout<<endl;
    

    return 0;
}