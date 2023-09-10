#include<iostream>
using namespace std;
//if we want to do with a single pointer i then instead of j we have to us length-i-1
bool checkPalindrome(string str, int i, int j){
    if(i>j) 
    return true;
    if(str[i]!=str[j])
    return false;
    else
    return checkPalindrome(str,i+1,j-1);
}

int main(){
    cout<<"Enter a String : "<<endl;
    string s;
    getline(cin, s);
    if(checkPalindrome(s,0,s.length()-1)){
        cout<<"Palindrome String "<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}