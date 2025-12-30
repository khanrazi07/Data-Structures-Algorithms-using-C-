#include<iostream>
#include<string>
using namespace std;
#include<vector>
class Student{
public:
    Student(string n , string c , int r){
        name = n ;
        classs = c;
        rollno = r;
    }
    // attributes
    string name;
    string classs;
    double rollno;
    Student(Student &orObject){
        cout<<"Hey i am a copy constructor: "<<endl;
        this->name = orObject.name;
        this->classs = orObject.classs;
        this->rollno = orObject.rollno;
    }
    void getInfo(){
        cout<<"Name:" << name <<endl;
        cout<<"Class:" << classs <<endl;
        cout<<"roll_no: "<<rollno <<endl;
    }

};
class Teacher{
private:
    double salary;

public:
    //Making our constructor of Teacher
    Teacher(){
        //cout<<"Constructor is Called: ";
        department = "Computer science";
    }
    // Parameterized constrcutor

    // attributes
    
    string name;
    string subject;
    string department;

    // methods  || member functions
    void ChangeDepartment(string newDept){
        newDept = department;
        
    }
    // setter
    void setSalary(double s){
        salary = s;
    }
    // getter
    double getSalary(){
        return salary;
    }
    


};
int main(){
    Teacher t1 ;
    Student S1("Razi Khan" , "Information Technology" , 152);
    Student S2(S1);
    S2.getInfo();
    // t1.name = "Razi";
    // t1.subject = "Data structures and Algo";
    // //t1.salary = 120000;    --- comment beacuse we use getter &  setter to get the salary
    // //t1.department = "AI";   --- comment beacuse we use contructor to initialize the department
    // cout<<t1.name<<" "<<t1.subject<<" "<</*t1.salary*/endl;
    // t1.setSalary(250000);
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.department<<endl;
    // //t1.ChangeDepartment("Software engineering");  we cant change the constructor varible by the function
    // cout<<t1.department<<endl;
    // cout<<S1.name<<" "<<S1.classs<<" "<<S1.rollno<<endl;

}