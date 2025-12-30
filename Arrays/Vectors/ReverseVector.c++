#include <iostream> 
using namespace std;
#include <vector>

int reverseVector(vector<int>& v1 , int size){

    int start = 0;
    int end = size - 1 ;
    while ( start < end){
        swap(v1[start] , v1[end]);
        start ++;
        end --;

    }


}


int main(){

    // now here is a function we have to write to reversing an vector 
    vector <int> v1 = {12,32,45,65,23,54,67,54,23};
    int size = v1.size();
    reverseVector(v1 , size);

    for (int val : v1){

        cout<<val <<" " ;

    }
    
    


    
}