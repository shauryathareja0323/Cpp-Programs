#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }

    int r=fact(n-1);
    return r*n;

}


int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}