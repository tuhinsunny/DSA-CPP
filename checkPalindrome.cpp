#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}

int getLength(char name[]){
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    c++;
    return c;
}

bool checkPalindrome(char ch[],int n){
    int start=0,end=n-1,flagStart,flagEnd;
    while(start<end){
        flagStart=0;
        flagEnd=0;
        char c1=toLowerCase(ch[start]);
        char c2=toLowerCase(ch[end]);
        if((c1>='a' && c1<='z')||(c1>='0' && c1<'9')){
            flagStart=1;
        }
        else
        start++;
        if((c2>='a' && c2<='z')||(c2>='0' && c2<'9')){
            flagEnd=1;
        }
        else
        end--;
        if(flagStart==1 && flagEnd==1){
                if(c1!=c2)
            return false;
            else{
                start++;
                end--;
        }
        }
    }
    return true;
}

int main(){
    cout<<"Enter a string of length less than 20 without space but u can include special characters which will not be considered : ";
    char ch[20];
    cin>>ch;
    if(checkPalindrome(ch,getLength(ch)))
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;

    return 0;
}