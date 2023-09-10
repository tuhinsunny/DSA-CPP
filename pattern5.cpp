/*
1
2 3 
3 4 5
4 5 6 7
*/
#include<iostream>
using namespace std;

int main(){
    // int sum;
    // for(int i=1;i<=5;i++){
    //     sum=i;
    //     for(int j=1;j<=i;j++){
    //         cout<<sum<<" ";
    //         sum++;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=5;i++){
        for(int j=i;j<2*i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}