#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno):Person(name, age){
        cout<<"Child constructor"<<endl;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll no:"<<rollno<<endl;
    }
};

class gradStudent: public Student{
public:
    string researchArea;
};

int main(){
    Student s1("rahul kumar", 21, 1234);
    s1.getInfo();
}