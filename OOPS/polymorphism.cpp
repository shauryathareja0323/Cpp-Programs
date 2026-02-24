#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    
    Student(){
        cout<<"Non-Parameterized Constructor"<<endl;
    }

    Student(string name){
        this->name = name;
        cout<<"Parameterized constructor"<<endl;
    }
};

int main(){
    Student s1("Shaurya");
    Student s2;//This is the example of polymorphism, in which we used constructor overloading.

    return 0;
}