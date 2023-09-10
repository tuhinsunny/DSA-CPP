#include<iostream>
using namespace std;

int main(){
    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";

    // cout<<arr<<endl;//0x61fefc
    // cout<<ch<<endl;//abcde

    // char *c=&ch[0];
    // cout<<c<<endl;//abcde -->prints entire string

    char temp='x';
    char *p= &temp;
    cout<<p<<endl;//will keep printing even after x unless it gets a null character

    
    return 0;
}