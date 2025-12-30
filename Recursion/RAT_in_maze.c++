#include<iostream>
using namespace std;
#include<vector>
#include<string>


void helper(vector<vector<int>> &mat , int row , int col ,string path , vector<string>  &ans ,vector<vector<int>> &visit){
    int n = mat.size();
    if(row < 0 || col < 0 || row >= n || col >= n ||  mat[row][col] == 0 || visit[row][col] == true){
        return;
    }
    if(row == n - 1 && col == n -1){
        ans.push_back(path);
        return;
    }

    visit[row][col] = true;




    helper(mat , row + 1 , col , path + "D" , ans , visit); // down
    helper(mat , row - 1 , col , path + "U" , ans , visit); // up
    helper(mat , row  , col + 1 , path + "R" , ans, visit); // right
    helper(mat , row  , col - 1 , path + "L" , ans , visit); // left

    visit[row][col] = false;

}


vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();

    vector<string>  ans ;
    string path = "";
    vector<vector<int>> visit(n , vector<bool>(n ,false));
    helper( mat , 0 , 0 , path , ans , visit);
}

int main(){
    vector<vector<int>> mat = {{1,0,0,0} , {1,1,0,1} , {1,1,0,0},{0,1,1,1}};
    vector<string>  ans = findPath(mat);
    for(string path : ans){
        cout<< path <<endl;
    }
    return 0;
}