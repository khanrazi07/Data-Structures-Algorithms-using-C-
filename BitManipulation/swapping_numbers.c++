#include<iostream>
using namespace std;
#include<vector>

void swap_num(vector<int>& nums){
    int l = 0 , r = nums.size()-1;
    while(l < r){
        nums[l] = nums[l]^nums[r];
        nums[r] = nums[l]^nums[r];
        nums[l] = nums[l]^nums[r];
        l++,r--;
    }
}

void print(vector<int>& nums){
    for(int i = 0 ; i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int countSetBits(int n){
    int count = 0;
    while(n > 0){
        if(n%2 != 0) count++;
        n = n/2;
    }
    return count;
}


int main(){
    int ans = countSetBits(16);
    cout<<ans<<endl;

    
}
