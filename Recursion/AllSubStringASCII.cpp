#include<iostream>
#include<string>
using namespace std;

void substr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int a=ch;
    string ach = to_string(a);
    string ros=s.substr(1);
    substr(ros,ans);
    substr(ros,ans+ch);
    substr(ros,ans.append(ach));
}

int main(){
    substr("AB","");

    return 0;
}