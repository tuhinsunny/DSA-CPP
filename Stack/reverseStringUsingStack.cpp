#include<iostream>
#include<stack>
using namespace std;

int main(){
    cout<<"Enter the string : ";
    string s;
    cin>>s;
    stack<char> st;
    for(int i = 0; i < s.length();i++){
        char ch = s[i];
        st.push(ch);
    }
    cout<<st.size()<<endl;
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<"Reversed String : "<<ans<<endl;
    return 0;
}