#include<iostream>
using namespace std;
#include<string>

// class student{
// public:
//     string name;
//     student(){
//         cout<<"non parametrized constructor"<<endl;

//     }

//     student(string name){
//         this->name = name;
//         cout<<"parametrized constructor"<<endl;
//     }


// };
// Run time polymorphism
class base{
    public:
        void getInfo(){
            cout<<"Hola amigos"<<endl;
        }
};

class child : public base {
    public:
        void getInfo(){
            cout<<"Hola amigoes from child"<<endl;
        }
};

// so depending upon the ocntext our forms cahnges hence its is an example of the polymorphism ---- constructor overloading 
int main(){
    // student s1("RAzi khan");
    // return 0;
    child c1 ;
    c1.getInfo();

}