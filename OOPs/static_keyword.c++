#include<iostream>
using namespace std;

void sum(){
    static int x = 0 ;
    cout<<x;
    x++;
}

int main(){
    sum();
    sum();
    sum();
    sum();
    sum();

}