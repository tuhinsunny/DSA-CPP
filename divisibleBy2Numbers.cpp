//How many numbers between 1 and n are divisible by a or b,we are to find the union of 2 sets
#include<iostream>
using namespace std;

int divisible(int n, int a, int b) {
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);//divisible by both a and b
    return c1+c2-c3;
}

int main(){
    cout<<"Enter the value of n : ";
    int n,a,b;
    cin>>n;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"Count of numbers which are divisible by a or b : "<<divisible(n,a,b)<<endl;
    return 0;
}