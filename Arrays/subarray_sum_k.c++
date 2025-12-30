#include<iostream> 
using namespace std;
#include<vector>

int longestSum(vector<int> &nums , int k){
    int right = 0 , left = 0;
    int maxSum = 0;
    int len = 0;
    while(right < nums.size()){
        right++;
        maxSum += nums[right-1];
    }
}

int main(){
    vector<int> nums = {-3 , 2 , 1};
    int k = 6;

}