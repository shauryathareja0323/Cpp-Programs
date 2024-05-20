#include<iostream>
#include<string>
using namespace std;

void r_dup(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]==s[1]){
        r_dup(s.substr(1));
    }
    else{
        cout<<s[0];
        r_dup(s.substr(1));
    }
}

int main(){
    string s="aaaabbbbcccceeedff";

    r_dup(s);

    return 0;
}