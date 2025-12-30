#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> nums = {1,2,4,2,4,2,1,4,1,2,4,1,4,4,4,4};

    sort(nums.begin(),nums.end());

    int freq = 0;
    int ans = nums[0];

    for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] == nums[i - 1]){
            freq ++;

        }
        else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/nums.size()){
            return ans;
        }
    }
    return ans;
    if (  ans ==  4){
        
    }


}