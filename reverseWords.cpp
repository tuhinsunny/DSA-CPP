#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
     int i=0,j=s.length()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
        return s;
}

int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);// cin cannot take up spaces in string so we use getLine
    int k=0;
    s=s+" ";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            cout<<reverse(s.substr(k,(i-k)))<<" ";   
            k=i+1;                
        }
    }
    return 0;
}