#include<bits/stdc++.h>
using namespace std;
void reverse(string& str,int i, int j){
    if(i>=j)
    return;
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
int main(){
    cout<<"Enter a String : "<<endl;
    string s;
    getline(cin, s);
    reverse(s,0,s.length()-1);
    cout<<"Reversed String :"<<s<<endl;
    return 0;
}