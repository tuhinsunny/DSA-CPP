#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);//size of the vetor is 5 and each is initialized with value 1
    vector<int> last(a);//copying vector a into another vector last
    cout<<"Print a : "<<endl;
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
    
    //capacity shows the actual size of the vector
    //size shows the no. of elements in vector
    cout<<"Capacity : "<<v.capacity()<<endl;//0
    v.push_back(1);
    cout<<"Capacity : "<<v.capacity()<<endl;//1
    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;//2
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;//4.. The Size gets doubled just like in arrayList in java
    cout<<"Size: "<<v.size()<<endl;//3.. No. of elements inside is 3
    cout<<"Element at 1st Index : "<<v.at(1)<<endl;//2
    cout<<"Element at 1st Index : "<<v[1]<<endl;//2
    cout<<"First Element : "<<v.front()<<endl;
    cout<<"Last Element : "<<v.back()<<endl;

    cout<<"Before Pop : "<<endl;
    for(int i:v){
        cout<<i<<" ";//1 2 3
    }cout<<endl;
    cout<<"After Pop"<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";//1 2
    }cout<<endl;

    cout<<"Before Clear Size and Capacity : "<<v.size()<<" "<<v.capacity()<<endl;// 2 4
    v.clear();
    cout<<"After Clear Size and Capacity : "<<v.size()<<" "<<v.capacity()<<endl;// 0 4


    

    return 0;
}