#include<iostream>
#include<climits>
using namespace std;

int getMax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int num[100];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<size;i++)
    cin>>num[i];

    cout<<"Maximum : "<<getMax(num,size)<<endl;
    cout<<"Minimum : "<<getMin(num,size)<<endl;

    //another way of finding maximum minimum
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<size;i++)
    maxi=max(maxi,num[i]);
    for(int i=0;i<size;i++)
    mini=min(mini,num[i]);
    cout<<"Another Way : "<<endl;
    cout<<maxi<<endl;
    cout<<mini<<endl;
    return 0;
}