#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollno;
};

class gradStudent: public Student{
public:
    string researchArea;
};

int main(){
    gradStudent s1;
    s1.name = "Tony Stark";
    s1.age = 21;
    s1.researchArea = "Quantum Physics";
}