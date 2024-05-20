#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

string DecimalToHexaDecimal(int n){
    string ans,r_ans;
    int a=0;
    int r=1;

    while(n>0){
        a=n%16;
        if(a==10){
            ans=ans+'A';   
        }
        else if(a==11){
            ans=ans+'B';
        }
        else if(a==12){
            ans=ans+'C';
        }
        else if(a==13){
            ans=ans+'D';
        }
        else if(a==14){
            ans=ans+'E';
        }
        else if(a==15){
            ans=ans+'F';
        }
        else{
            ans=ans+to_string(a);
        }
        n=n/16;
    }
    int len=ans.size();

    for(int i=len;i>=0;i--){
        r_ans=r_ans+ans[i];
    }

    return r_ans;
}

int main(){
    int n;
    cout<<"Enter the Decimal number:";
    cin>>n;

    cout<<DecimalToHexaDecimal(n)<<endl;

    return 0;
}