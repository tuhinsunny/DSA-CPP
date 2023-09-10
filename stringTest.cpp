#include<bits/stdc++.h>

using namespace std;

int main(){
    string st="Tuhin Chandra";
    cout<<st<<endl;
    cout<<st.length()<<endl;
    transform(st.begin(),st.end(),st.begin(), ::toupper);
    cout<<st<<endl;
    transform(st.begin(),st.end(),st.begin(), ::tolower);
    cout<<st<<endl;
    cout<<(char)toupper(st.at(3));
    return 0;
}