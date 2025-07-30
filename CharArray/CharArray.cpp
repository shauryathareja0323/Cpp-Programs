#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c', '\0'};
    char str1[] = "Hello";
    
    cout<< strlen(str1) << endl;
    cout<<str1<<endl;
    cout<<str1[4]<<endl;
    cout<<str1[5]<<endl;

    return 0;
}