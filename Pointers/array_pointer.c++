#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,34,56,6,1};
    //now the arr (name) it is the pointer in c++ which shows the address of the pointer;
    cout<<&arr<<endl;
    int *ptr = &arr[0];
    cout<<*ptr<<endl;

    // now we do the two operations in pointer increment & decrement || add & subtract

    int a = 100;
    int *p = &a;
    cout<<p<<endl;
    p++;// increment of the pointer address
    cout<<p<<endl;
    p--;// decrement of the address of the pointer
    cout<<p<<endl;
    // now we do some add and subtraction things
    p = p+4;//hence here 4 bits are added to the meomory
    cout<<"additions after:"<<p<<endl;
    p = p -2;//here 2 bits subtracted from the memory
    cout<<"after the subtraction:"<<p<<endl;


}