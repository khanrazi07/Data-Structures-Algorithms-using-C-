#include<iostream>
#include<vector>
using namespace std;

int main(){
    //here we are doing th code of leetcode question 217 product of an array expect itself
    vector <int> nums = {1,2,3,4};
    int n = nums.size();
    vector <int> ans(n ,1);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(j != i){
                ans[i] *= nums[j];
        }

    }
    return ans;
}
}