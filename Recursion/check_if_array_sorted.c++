#include <iostream>
using namespace std;
#include<vector>

bool checkArray(vector<int> arr , int n){
    if(n == 1 || n == 0){
        return true;
    }
    return arr[n-1] >= arr[n-2] && checkArray(arr,n-1);
    
}


int main(){
    vector<int> arr = {1,2,7,8,9,10};
    cout<<checkArray(arr , arr.size())<<endl;
    return 0 ;

}