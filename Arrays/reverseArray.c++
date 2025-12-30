#include <iostream>
using namespace std;

int reverseArray(int array , int size){

    int start = 0;
    int end = size -1 ;

    while (start < size){
        swap(array[start] , array[end]);
        start ++ ;
        end -- ;
        
    }


   
    
}



 int main(){
    // the given array is 
    int array[] = {4,2,7,8,1,2,5};

    int size = sizeof(array)/sizeof(array[0]);
    // we have to reverse the array 



 }