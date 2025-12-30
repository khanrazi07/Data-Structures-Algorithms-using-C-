#include <iostream>
using namespace std;

int largest(int array[] ,int size){

    int largest = array[0];

    for(int i = 1 ; i < size ; i++){
        if(array[i]> largest){
            largest = array[i];

        }

    }
    return(largest);

}

int smallest(int array[], int size){
    int smallest = array[0];

    for (int i = 1 ;i < size ; i++){
        if(array[i]<smallest){
            smallest = array[i];
        }
    }
    return(smallest);

}

int main(){
    int array [6] = {5,15,22,1,-15,24};

    // here we have to find the samllest and the largest value in an array

    int size = sizeof(array)/sizeof(array[0]);

    cout<< "Largest element in this array : "<<largest(array,size)<<endl;
    cout<< "Smallest element in this array : "<<smallest(array,size)<<endl;

}