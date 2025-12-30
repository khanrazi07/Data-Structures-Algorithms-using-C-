#include<iostream>
#include <vector>
using namespace std;


int main(){

    vector <int> v1 = {1,3,5,6,7,3,2,7};
    // here if we do the linear search usif for loop
    int target = 7;

    bool found = false ;

    for(int i = 0 ; i<=v1.size() ; i++ ){
        if (v1[i] == target){
            cout<<"the taget is found at :"<<i<<endl;
            found = true ;

            

        }
        
    }
    if(!found){
        cout<<"Tareget not found"<<endl;
    }   
    return 0 ;



}