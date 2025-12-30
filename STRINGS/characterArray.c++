#include<iostream>
using namespace std;
#include<cstring>

int main(){
    char str[] = {'a' , 'b' , 'c' , '\0'}; // its is known as the character string array
    cout<<str<<endl;
    char s [10];
    cout<<"enter the phrase you want"<<endl;
    cin.getline(s , 10 , '#'); // here we assingn a delimiter as ("#") when this character came the input will not store from there
    for(char stm : s){
        cout<< stm << " ";
    }
    
    cout<<strlen(s)<<endl;

}