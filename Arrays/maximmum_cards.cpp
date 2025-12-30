#include<iostream>
using namespace std;
#include<vector>

void printing_array(vector<int> &nums){
    for(auto num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main(){
    int n ;
    cin>> n;
    vector<int> nums;
    for(int i = 0 ; i  < n ; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<nums[0]<<endl;
    
}

