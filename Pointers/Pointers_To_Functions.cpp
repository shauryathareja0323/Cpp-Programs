#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
};

int main(){
    int a=1; 
    int b=2;
    
    int *p1=&a;
    int *p2=&b;
    
    swap(*p1, *p2);

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}