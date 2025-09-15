#include<iostream>
using namespace std;

int main(){
    string s = "Hello World";
    int n = 0;
    char a = s[n];
    int r = 0;
    while(a!='\0'){
        a = s[n];
        r++;
        n++;
    }

    cout<<r-1<<endl;

    return 0;
}