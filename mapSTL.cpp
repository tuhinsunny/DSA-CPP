#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;//for map sorted order 
    m[1]="Tuhin";
    m[2]="Sunny";
    m[13]="Chandra";
    for(auto i:m)
    cout<<i.first<<endl;//1 2 13 , keys will be printed 
    m.insert({5,"Bheem"});
    cout<<"Before Erase : \n";
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;
    cout<<"Finding 13 : "<<m.count(13)<<endl;//1 which means true that is present 
    cout<<"After erase : "<<endl;
    m.erase(13);
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;// 13 and Chandra is not printed
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++)
    cout<<(*i).first<<endl;//if erase is not used 5 and 13 will be the output

    return 0;
}