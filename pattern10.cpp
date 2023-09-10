/*
A
B B
C C C
*/
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(char)(64+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}