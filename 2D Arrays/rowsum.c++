#include <iostream>
using namespace std;

int maxrowsum(int matrix[][4] , int rows , int col){

    int maxsum = INT8_MIN;
    for(int i = 0 ; i < rows ; i++){
            int sum = 0; 
            for(int j = 0 ; j< col ; j++){
                sum = matrix[i][j] + sum;       
                
            }
        maxsum = max(sum , maxsum);
    }
    return maxsum;
}



int main(){
    int matrix [4] [4] = {{1,2,3,4}, {4,3,2,1}, {5,6,7,8}, {8,7,6,5}};
    int rows = 4;
    int col = 4;
    int target = 8;
    cout<<maxrowsum(matrix, rows , col)<<endl;
   
    
} 