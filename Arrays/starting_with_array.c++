#include <iostream>
using namespace std;

int main(){
    int marks [5] = {25,88,76,56,78};
    int sz = sizeof(marks)/sizeof(marks[0]);

    for(int i = 0 ; i < sz ; i++){
        cout<<marks[i]<<endl;
    }
    return 0 ;



}