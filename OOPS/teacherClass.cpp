#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string new_dept){
        dept = new_dept;
    }

    void changeSalary(double new_salary){
        salary = new_salary;
        cout<<"New Salary is: "<<salary<<endl;
    }
};

int main(){
    Teacher t1;

    t1.name = "K";
    t1.dept = "Humanities";
    t1.subject = "Pol Science";

    cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject<<endl;

    t1.changeDept("Arts");

    cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject<<endl;

    t1.changeSalary(200000);

    return 0;
}