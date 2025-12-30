#include<iostream>
using namespace std;
#include<string>

class Shape{// abstract class
    public:
        virtual void draw() = 0; // pure virtual function
};
class circle : public Shape {
    public:
        void draw(){
            cout<< "drawing a circle\n";
        }
};

int main(){
    circle c1;
    c1.draw();

}