/*
Input: a = 4, b = 3 
Output: ABABABA
Explanation: The other possible ways could be “AAAABBB” or “AABBAAB” etc. 
But “ABABABA” is the most optimum solution with minimum consecutive occurrence.

Input: a = 5, b = 1
Output: AABAAA
*/
#include<iostream>
using namespace std;

string pigeonHoleStringConstruct(int a, int b){
    int temp=b+1;//the string is divided by B into b+1 parts
    string s;
    while(temp--){//temp is greater than 0
        int eachPart = a/(b+1);
        while(eachPart--){
            s.push_back('A');
            a--;
        }
        if(b>0){
            s.push_back('B');
            b--;
        }
    }
    return s;
}

int main(){
    cout<<"Enter a and b : ";
    int a,b;
    cin>>a>>b;
    if(a<=b){
        cout<<"Wrong Input !"<<endl;
        return 0;
    }
    string str = pigeonHoleStringConstruct(a,b);
    cout<<str<<endl;

    return 0;
}