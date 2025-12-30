#include <iostream>
using namespace std;
#include <utility>

bool linearSearchmat(int matrix[][4] , int rows , int col , int target){
    pair <int,int> ans;
    for(int i = 0 ; i < rows ; i++){
        for(int j= 0 ; j < col ; j++){
            if(matrix[i][j] == target){
                ans = make_pair(i , j );
                cout<<ans.first<<","<<ans.second<<endl;
                return true;
                
            }
        }
    }
    return false;

}

int main(){
    int matrix [4] [4] = {{1,2,3,4}, {4,3,2,1}, {5,6,7,8}, {8,7,6,5}};
    int rows = 4;
    int col = 4;
    int target = 8;
    cout<<linearSearchmat(matrix, rows , col , target)<<endl;
   
    
}    