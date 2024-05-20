#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    char operator1;
    cin>>operator1;

    switch (operator1)
    {
    case '+':
        cout<<a+b;
    break;
   
    case '-':
        cout<<a-b;
    break;

    case '*':
        cout<<a*b;
    break;

    case '/':
        cout<<a/b;
    break;
   
    default:
        cout<<"Not Ok!!";
    break;
   } 
}
