#include<iostream>
#include<string>
using namespace std;

void comb(string a, string b){
    if(a.length()==0 || b.length()==0){
        return;
    }

    comb(a.substr(1),b);
    cout<<a[0];
    cout<<b[0]<<endl;
    comb(a.substr(0,1),b.substr(1));
}

int main(){
    string keypadArr[]={"","\n","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int a,b;
    cin>>a;
    cin>>b;

    comb(keypadArr[a],keypadArr[b]);


    return 0; 
}