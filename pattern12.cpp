/*
D
C D
B C D
A B C D
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<(char)(65+n-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}