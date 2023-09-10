#include<iostream>
#include<math.h>
using namespace std;

int BitConvert(int n) {
    int i=0;
    float ans=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+(bit*pow(10,i));
        i++;
        n=n>>1;
    }
    return ans;
}
int BitsCount(int n){
    int c=0;
    while(n!=0){
        if(n%10==1)
        c++;
        n=n/10;
    }
    return c;
}

int main(){
    int a,b;
    cin>>a>>b;
    int bit_a=BitConvert(a);
    cout<<bit_a<<endl;
    int bit_b=BitConvert(b);
    cout<<bit_b<<endl;
    cout<<BitsCount(bit_a)+BitsCount(bit_b)<<endl;
    return 0;
}