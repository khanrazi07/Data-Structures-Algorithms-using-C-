#include<iostream>
using namespace std;

int main(){
    int n = 1000;
    cout<<"address of the variable n: "<<&n<<endl;
    // now we assign an address to the variable called pointer 
    int *p = &n ;
    cout<<"address of the variable n stored in pointer p: "<<p<<endl;

    int** ptr2 = &p ;
    cout<<"address of the 2 pointer p stored in pointer ptr2: "<<&ptr2<<endl;
    cout<<ptr2<<endl;
    int newNum = 10 ;
    int *addNUm = &newNum;
    cout<<"the value of the new is :"<<*(&newNum)<<endl;

    // now we learn about the null pointer
    int *pointr = NULL;// this is an initalization of the null pointer , null pointer dosent point to the any direction
    cout<<pointr<<endl;

}