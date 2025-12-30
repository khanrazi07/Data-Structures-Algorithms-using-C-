#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Student{
public:
    string name;
    //double CGPA; cooment this beacuse we take a value from pointer
    double* CgpaPtr;

    Student(string name , double CGPA){
        this->name = name;
        CgpaPtr = new double;
        *CgpaPtr = CGPA;

    }
    // Student(Student &o){
    //     this->name = o.name;
    //     CgpaPtr = new double;
    //     *CgpaPtr = *o.CgpaPtr;


    // }
    //destructor
    ~Student(){
        cout<<("Deleted everything")<<endl;
    }

    void getInfo(){
        cout<<"Name: " << name <<endl;
        cout<<"CGPA: " << *CgpaPtr <<endl;
    }

};

int main(){
    Student s1("Razi Khan" , 7.2);
    // Student s2("Adnan Lone" , 10.0);
    // Student s3(s1);
    // s1.getInfo();
    // *(s3.CgpaPtr) = 6.50;
    s1.getInfo();
    // s3.getInfo();

}