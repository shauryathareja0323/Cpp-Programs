#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    int age;
};

class Student{
public:
    int rollno;
};

class TA: public Student, public Teacher{
public:
    string researchArea;
};

int main(){
    TA t1;
    t1.name = "No name";
    t1.age = 21;
    t1.rollno = 1234;
    t1.researchArea = "QA";
}