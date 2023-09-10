/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    for(int i=1;i<=n;i++){
        sum=i;
        for(int j=1;j<=n;j++){
            cout<<(char)(64+sum)<<" ";
            sum++;
        }
        cout<<endl;
    }
    return 0;
}