/*
1 1 1 
2 2 2
3 3 3
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows or columns : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}