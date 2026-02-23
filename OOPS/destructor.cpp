#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student(){//This is the deconstructor, it deletes the allocated memry once the main function is eecuted.
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("rahul", 6.9);
    s1.getInfo();
}