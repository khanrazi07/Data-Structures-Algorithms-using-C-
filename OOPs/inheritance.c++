#include<iostream>
using namespace std;
#include<string>

class Person{
public:
    string name;
    int  age;
    ~Person(){
        cout<<"everything is deleted in calss Person"<<endl;
    }

    // Person(string name , int age){
    //     this->name = name;
    //     this->age = age;
    // }
};
            
class Student: public Person{
public:
    // so here we want the name , age , roll no of the student so we can just define roll no here and inherit the others from base class Person
    int rollno;
    ~Student(){
        cout<<"everything is deleted in class Student"<<endl;
    }

    void getInfo(){
        cout<< "Name:" << name<<"\n"<< "Age: "<< age<<"\n" << "rollno: "<<rollno<<endl;
    }
};
// // multi level inheritance
// class ResearchStudent : public Student {
//     string ResearchArea;

// };
// multiple inheritance
class Teacher{
public:
        string subject;
        double salary;
};
    
class TA : public student , public Teacher {
};  



int main(){

    TA t1 ;
    t1.name = "Razi Khan";
    t1.age = 20;
    t1.rollno = 152;
    t1.subject = "DSA";
    t1.salary = 145000;
    cout<<t1.name;


}