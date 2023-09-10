/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j,k=0;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(j=1;j<=2*k;j++){
            cout<<"* ";
        }
        k++;
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}