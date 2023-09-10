#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,*p;
    p=&a;
    a=10;
    p=5000;
    cout<<*p;
    return 0;
}