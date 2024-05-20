#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter the string:";
    cin>>s;

    int n=0;

    while(s[n]!='\0'){
        n++;
    }

    bool check=1;

    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==1){
        cout<<"Given String is a palindrome";
    }
    else{
        cout<<"Given String is not a palindrome";
    }

    return 0;
}