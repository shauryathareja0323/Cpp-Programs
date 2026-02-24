#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"I am part of parent class"<<endl;
    }

    virtual void hello(){
        cout<<"Hello from parent"<<endl;
    }
};

class Child: public Parent{
public:
    void getInfo(){
        cout<<"I am part of child class"<<endl;
    }

    void hello(){
        cout<<"Hello from child"<<endl;
    }
};

int main(){
    Parent p1;
    Child c1;

    p1.getInfo();
    c1.getInfo();
    c1.hello();

    return 0;
}