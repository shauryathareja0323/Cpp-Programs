#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties or attributes

private:
    double salary;

public:
    // We can have multiple constructors of same name until they have different parameters.
    // Non Parameterized Constructor
    Teacher(){ //This is an example of constructor which will always run without compiler creating it's own constructor, this time we have created our own constructor.
        cout<<"Hi I am a constructor"<<endl;
        dept = "Computer Science";
    }

    // Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary){ //This is an example of constructor which will always run without compiler creating it's own constructor, this time we have created our own constructor.
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Copy Constructor()
    Teacher(Teacher &orgObj){
        cout<<"I am custom copy constructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    string name;
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

    void get_info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};

int main(){
    Teacher t1("Shaurya", "CS", "C++", 250000); //constructor call, whenever a new object is created.
    t1.get_info();
    
    Teacher t2(t1);
    t1.changeDept("ELE");
    cout<<endl;
    t1.get_info();
    t2.get_info();

    return 0;
}