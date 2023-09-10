#include<iostream>
#include<array>
using namespace std;

int getLength(char name[]){
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    c++;
    return c;
}

int main(){
    char name[20];
    cout<<"Enter your name : "<<endl;//Tuhin Chandra
    cin>>name;
    cout<<"Your name is "<<name<<endl;//Tuhin
    //name[2]='\0';//null
    //cout<<"Your name is "<<name;//Tu
    cout<<"Length of the String : "<<getLength(name)<<endl;
    return 0;
}