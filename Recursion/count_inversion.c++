#include<iostream>
using namespace std;
#include<vector>

int merge(vector<int> &nums , int st , int mid , int end){
    int i = st , j = mid + 1;
    int inversion = 0 ;
    vector<int> temp;
    while(i <= mid && j <= end){
        if(nums[i] >= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            inversion += (mid - i + 1);
            j++;
        }
    }
    while(i <= mid ){
        temp.push_back(nums[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(nums[j]);
        j++;
    }
    for(int idx = 0 ; idx < temp.size() ; idx++){
        nums[idx + st] = temp[idx];

    }
    return inversion;

}

int mergeSort(vector<int> &nums , int st ,int end){
    if(st < end){
        int mid = st + (end - st)/2;
        int lCount = mergeSort(nums , st , mid);
        int Rcount = mergeSort(nums , mid + 1 , end);
        int inversioncount = merge(nums , st , mid , end);
        return lCount + Rcount + inversioncount;

    }
    return 0;
    
}

int main(){
    vector<int> nums = {6,3,5,2,7};
    // int inversion = 0 ;
    // for(int i = 0 ; i < nums.size() ; i++){
    //     for(int j = i ; j < nums.size() ; j++){
    //         if(i < j && nums[i] > nums[j]){
    //             inversion++;
    //         }
    //     }
    // }
    // cout<<inversion<<endl;
    // return 0;
    int ans = mergeSort(nums , 0 , nums.size() - 1);
    cout<<ans<<endl;
    return 0 ;
}