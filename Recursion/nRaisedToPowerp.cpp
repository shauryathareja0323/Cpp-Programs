#include<iostream>
using namespace std;

int raisedToPower(int n, int p){
    if(p==0){
        return 1;
    }
    
    int r=raisedToPower(n,p-1);
    return r*n;
    
}

int main(){
    int n,p;
    cin>>n;
    cin>>p;

    cout<<raisedToPower(n,p)<<endl;

    return 0;
}