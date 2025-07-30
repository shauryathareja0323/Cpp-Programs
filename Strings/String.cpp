#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    string str1(5, 'n');
    string str2="Shaurya";
    string str3;

    getline(cin,str3);

    str2[7]='A';

    //cout<<str;
    cout<<str1<<endl;
    cout<<str1[2]<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    

    return 0;
}