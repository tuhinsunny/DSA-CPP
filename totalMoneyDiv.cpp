#include<iostream>
using namespace std;

int main(){
    int n,sub;
    cout<<"Enter the total amount : ";
    cin>>n;
    cout<<"Enter the sub amount 100/50/20/10 : ";
    cin>>sub;
    switch(sub)
    {
        case 100: 
        cout<<n/100<<endl;
        break;
        case 50 :
        cout<<n/50<<endl;
        break;
        case 20 :
        cout<<n/20<<endl;
        break;
        case 10 :
        cout<<n/10<<endl;
        break;
        default:
        cout<<"Default Case ";
    }


    return 0;
}