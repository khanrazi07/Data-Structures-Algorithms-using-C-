#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector <int> num1 = {1,2,3,0,0,0};
    vector <int> num2 = {2,5,6};
    int n = 3;
    int m = 3;
    int ts = n + m ;
    int i = n -1 ;
    int j = m -1 ;
    int id = ts - 1 ;
    while(i >= 0 && j >= 0){
        if(num1[i] >= num2[j]){
            num1[id] = num2[j];
            id--;
            i--;
        }
        else{
            num1[id] = num2[j];
            id--;
            j--;
        }
    }
    for(int i = 0 ; i < ts ; i++){
        cout<<num1[i]<<" ";
    }
    

}