#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Hello I am Tuhin Chandra";
    vector<string> tokens;//vector of strng to save tokens
    stringstream check(str);//stringstream class check
    string newstr;
    //tokenizing w.r.t space ' '
    while(getline(check, newstr, ' ')){
        tokens.push_back(newstr);
    }
    //printing the token vector
    for(int i=0;i<tokens.size();i++){
        cout<<tokens[i]<<endl;
    }
    //Tokenizing using strtok()
    // Splits str[] according to given delimiters.
    // and returns next token. It needs to be called
    // in a loop to get all tokens. It returns NULL
    // when there are no more tokens. char * strtok(char str[], const char *delims);
    char st[]="Tuhin is a good boy and likes to spend time coding and with books";
    char *token=strtok(st," ");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while(token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL," ");
    }
    return 0;
}