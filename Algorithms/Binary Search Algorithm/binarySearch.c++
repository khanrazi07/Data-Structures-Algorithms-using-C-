#include<iostream>
#include<vector>
using namespace std;

/// here we are doing the binary search approach ie; binary search algorithm on the given arrayy 

int binarySearch(vector <int> array , int target){

    int start = 0;
    int n = array.size();
    int end = n -1 ;


    while(start <= end){// this is an iterative code 
        int mid = (start+((end-start)/2));

        if(target > array[mid]){
            start = mid + 1;
        }
        else if(target < array[mid]){
            end = mid - 1 ;
        }
        else{
            
            cout<<mid<<endl; 
            return mid; 
        }

    }
    return -1;
}

int main(){

    vector <int> array = {-1,0,3,4,5,9,12};// odd array
    vector <int> array2 = {1,2,4,5,6,7,8,12,14}; // even array
    int target = 12;
    cout<<"the result of binary search is :"<<binarySearch(array , target)<<endl;
    cout<<"the result of binary search is :"<<binarySearch(array2 , target)<<endl;
    

    
    
    
}