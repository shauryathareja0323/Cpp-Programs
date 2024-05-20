#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s1="zxdabhsdbjbdhbvbbdfdhub";

    cout<<'a'-'A'<<endl;

    for(int i=0; i<s1.length(); i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i] -=32;
        }
    }

    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    cout<<s1<<endl;


    
    return 0;
}