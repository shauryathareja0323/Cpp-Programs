#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    char str1[100];

    // cout<<"Enter char array";
    // cin>>str;

    // cout<<endl;

    // cout<<"Enter char array2:";
    // cin.getline(str1, 100);

    cout<<"Enter char array2:";
    cin.getline(str1, 100, '$');

    // cout<<"Output:"<<str<<endl;
    cout<<"Output2:"<<str1<<endl;

    return 0;
}