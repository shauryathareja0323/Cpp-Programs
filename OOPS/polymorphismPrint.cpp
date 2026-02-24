#include<iostream>
#include<string>
using namespace std;

class Print{
public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }
    void show(char ch){
        cout<<"ch: "<<ch<<endl;
    }
};

int main(){
    Print p1;
    p1.show(2);
    p1.show('a');

    return 0;
}