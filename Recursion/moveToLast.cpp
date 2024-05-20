#include<iostream>
#include<string>
using namespace std;

string mov_x(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string r = mov_x(s.substr(1));
    if(ch=='x'){
        return r+ch;
    }

    return ch+r;
    
}

int main(){
    string s="axxbdxcefxhix";

    cout<<mov_x(s)<<endl;

    return 0;
}