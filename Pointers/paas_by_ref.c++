#include<iostream>
using namespace std;

void changeA(int a){// here we are doing the pass  by value 
    a = 20 ;
    
}

void psbyval(int* ptr){//here we are doing the pass by refrence using pointer so the value of a will be change in main fn too
    *ptr = 1000;

    
}

void alias(int &b){
    b = 999;
}

int main(){

    int a = 786;
    changeA(a);// the value of a is 786 cause we do pass by value;
    cout<<"the value of the a in function is: "<<a<<endl;
    psbyval(&a);
    cout<<"the value of a is right now : "<<a<<endl;
    alias(a);
    cout<<"the value of c right now is : "<<a<<endl;

}