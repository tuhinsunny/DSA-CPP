#include<iostream>
using namespace std;

int main(){
 /*   int arr[10]={2,5,6};

    cout<<"Address of the first block : "<<arr<<endl;//0x61fee8
    cout<<"Address of the first block : "<<&arr[0]<<endl;//0x61fee8
    cout<<"*arr : "<<*arr<<endl;//2
    cout<<"*arr +1 : "<<*arr +1<<endl;//3
    cout<<"*(arr+1) : "<<*(arr+1)<<endl;//5, Value at 0+1=1st location
    cout<<"(*arr)+2 : "<<(*arr)+2<<endl;//4 
    int i=2;
    cout<<i[arr]<<endl;//6
*/
/*
    int temp[10];
    cout<<"size of the array : "<<sizeof(temp)<<endl;//40
    int *ptr = &temp[0];
    cout<<"Size of the pointer : "<<sizeof(ptr)<<endl;//4 for my computer otherwise 8 
*/
    int arr[10]={0};
    //arr=arr+1;//Error
    int *ptr=&arr[0];
    ptr=ptr+1;
    cout<<ptr<<endl;//if above line not written Output : 0x61fee4... If above line written Output : 0x61fee8.. Increased by 4 bytes
    
    return 0;
}