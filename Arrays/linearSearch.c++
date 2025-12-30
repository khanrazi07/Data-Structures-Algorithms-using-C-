#include <iostream>
using namespace std;

int linearSearch(int arr[] , int size, int target){
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==target){
            cout<<"Target value is found"<<endl;
            return i ;
        }
    }
    cout<<"Target value is not found"<<endl;
    return -1;
        
    }
    

int main(){
    int arr[] = {4,2,7,1,2,5};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    // target variable is 8; lets do the linear search !!
    linearSearch(arr,size,target);
    
}