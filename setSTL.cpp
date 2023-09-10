#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(6);//time complexity of insert is O(logN)
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    for(auto i:s)
    cout<<i<<" ";//0 1 5 6
    cout<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    cout<<i<<" ";//0 5 6 
    cout<<endl;
    cout<<"5 is Present or not : "<<s.count(5)<<endl;//1 means true
    cout<<"-5 is Present or not : "<<s.count(-5)<<endl;//0 means false
    set<int>::iterator itr=s.find(5);
    cout<<"Value present at itr --> "<<*itr<<endl;//5
    for(auto it=itr;it!=s.end();it++)
    cout<<*it<<" ";//5 6
    cout<<endl;
    return 0;
}