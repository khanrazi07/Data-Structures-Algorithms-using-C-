#include <iostream>
using namespace std;
int main(){
    int matrix [4] [4] = {{1,2,3,4}, {4,3,2,1}, {5,6,7,8}, {8,7,6,5}};
    int rows = 4;
    int col = 4;
    
    
    // cout<<matrix [3][4]<<endl;//accessing the elements at 3 row and 4th col in matrix;
    // matrix [3] [4] = 100; // cahnging the value of the given index
    // cout<<matrix [3][4]<<endl;
    // getting the imput in 2d array




    /*for( int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>matrix[i][j];
        }
    }
    */



    for( int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;

}