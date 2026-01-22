#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties or attributes

private:
    double salary;

public:
    string name = "Shaurya";
    string dept;
    string subject;

    //methods or member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(int sal){
        salary = sal;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Aman";
    t1.subject = "C++";
    t1.dept = "cs";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;

    t1.changeDept("elec");
    t1.setSalary(3000);

    cout<<t1.dept<<endl;

    double salary = t1.getSalary();

    cout<<salary<<endl;
    

    return 0;
}