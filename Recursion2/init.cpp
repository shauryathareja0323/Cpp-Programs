#include<iostream>
using namespace std;

void abc(int n){
    if(n>0){
        cout<<n<<endl;
        n--;
        abc(n);
    }
}


int main(){
    int n = 4;
    abc(n);
    return 0;
}