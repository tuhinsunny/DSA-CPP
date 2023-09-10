/*
A
B C
C D E
D E F G     
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<2*i;j++){
            cout<<(char)(64+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}