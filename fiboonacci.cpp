#include<iostream>
using namespace std;

int fibo(int n){
    int a=0,b=1,c;
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}

int main(){
    cout<<"Enter the number of test cases : ";
    int t,n;
    cin>>t;
    while(t-->0){
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<n<<" th fibonacci number is : "<<fibo(n)<<endl;
    }
    return 0;
}