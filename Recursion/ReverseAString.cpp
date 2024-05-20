#include<iostream>
#include<string>
using namespace std;

string srev(string a,int n,int i){
    string r="";
    if(i==n){
        char z=a[n];
        string k(1,z);
        return k;
    }
    string s=srev(a,n,i+1);
    r.append(s);
    char z=a[i];
    string k(1,z);
    r.append(k);
    return r;
}
 

int main(){
    string a="racecar";
    int n=a.length();

    cout<<srev(a,n-1,0)<<endl;

    return 0;
}