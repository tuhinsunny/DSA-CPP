#include<iostream>
using namespace std;

int main(){
    // for(int i = 0 ; i< 5 ; i++){
    //     cout<<"The value is : "<<i<<endl;
    // }

    // int i = 0;
    // while(i<5) {
    //     cout<<i<<endl;
    //     i++;
    // }
    //sum from 1 to n
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum=-0;
    for(int i= 1 ; i<=n;i++){
        sum+=i;
    }
    cout<<"The sum from 1 to "<<n<<" is : "<<sum<<endl;
    return 0;
}