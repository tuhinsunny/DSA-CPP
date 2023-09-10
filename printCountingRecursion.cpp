#include<iostream>
using namespace std;

void count(int n){
    if(n==0) return;
    cout<<n<<" ";
    count(n-1);
}//Output will be 5 4 3 2 1

// void count(int n){
//     if(n==0) return;
//     count(n-1);
//     cout<<n<<" ";
// }//Output will be 1 2 3 4 5

int main(){
    int n;
    cin >> n;
    count(n);
    return 0;
}