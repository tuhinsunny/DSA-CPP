#include<iostream>
using namespace std;
int gcd(int x, int y){
    while(x!=y){
        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    return x;
}
                    
int main(){
    cout<<"Enter 2 numbers : ";
    int a,b;    
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
    
}