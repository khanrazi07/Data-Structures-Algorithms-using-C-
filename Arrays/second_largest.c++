#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>  nums = {1,1,2};
    // int max = 0 , secondMax = -1;
    // for(int i = 0 ; i < nums.size(); i++){
    //     if(nums[i] > max){
    //         max = nums[i];
    //     }
    //     else if(nums[i] > secondMax && nums[i] != max){
    //         secondMax = nums[i];
    // }
    // cout<<secondMax<<endl;
    int count = 0 ;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] != nums[i+1]){       
            count++;
        }

    }
    cout<<count<<endl;

}
