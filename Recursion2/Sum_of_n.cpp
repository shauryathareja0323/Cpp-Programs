#include<iostream>
using namespace std;

int sum_of_n(int n){
    if(n==1){
        return 1;
    }
    int sum = n+sum_of_n(n-1);
    return sum;
}

int main(){
    int n = 3;
    int r = sum_of_n(n);
    cout<<r<<endl;
    return 0;
}