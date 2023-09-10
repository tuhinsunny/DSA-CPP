#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;//0
    cout<<binary_search(v.begin(),v.end(),7)<<endl;//1 means present 
    cout<<"Lower Bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;//2
    cout<<"Upper Bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;//3
    cout<<"Upper Bound--> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;//2

    int a=3 , b=5;
    cout<<"Max = "<<max(a,b)<<endl;
    cout<<"Min = "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    string s="abcdef";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());//3 6 7 1
    cout<<"Vector after rotation : "<<endl;
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    //sort is based on intro Sort --> which is a combination of quick sort, heap sort and insertion sort.
    sort(v.begin(),v.end());//1 3 6 7
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}