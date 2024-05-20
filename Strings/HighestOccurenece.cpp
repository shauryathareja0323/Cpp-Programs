#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int high=0;
    int temp=0;

    int arr[26];

    for(int i=0; i<26; i++){
        arr[i]=0;
    }

    for(int i=0; i<s.length(); i++){
        int n=s[i]-97;
        arr[n] +=1;
    }

    for(int i=0; i<26; i++){
        temp=arr[i];
        if(temp>high){
            high=temp;
        }
    }

    cout<<high<<endl;

    return 0;
}