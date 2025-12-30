#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int> &nums , int st , int end){
    int idx = st - 1 , pivot = nums[end];
    for(int j = st ; j < end ; j++){
        if(nums[j] <= pivot){
            idx++;
            swap(nums[j] , nums[idx]);
        }
    }
    idx++;
    swap(nums[idx] , nums[end]);
    return idx;
}

void qS(vector<int> &nums , int st , int end){
    if(st < end){
        int pivIdx = partition(nums , st, end);
        qS(nums , st , pivIdx - 1);
        qS(nums, pivIdx + 1 , end);
    }
}


int main(){
    vector<int> nums = {12,31,35,8,32,17};
    qS(nums , 0 , nums.size()-1);

    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}