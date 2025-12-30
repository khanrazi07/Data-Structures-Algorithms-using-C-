#include<iostream>
#include<vector>
using namespace std;

void printN(int n){
    if(n == 0) return;
    printN(n-1);
    cout<<n<<" ";

}
int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}
int binarysearch(vector<int> nums , int target , int l , int r){
    if(l > r) return -1;
    int mid = (l + r )/2;
    if(nums[mid] == target) return mid;
    else if(nums[mid] < target) return binarysearch(nums , target , mid + 1 , r);
    else return binarysearch(nums , target , l , mid-1);

}
int findsum(int n){
    if(n <= 0) return 0;
    return n%10 + findsum(n/10);
}
int reverseaNUM(int n){
    if(n <= 0) return 0;
    return n%10 + findsum(n/10);
}

int countZero(int n , int count){
    if(n == 0) return count;
    if(n%10 == 0) count++;
    return countZero(n/10 , count);
}

// Finding that the given array is sorted or not

bool isSorted(vector<int> &nums , int i , int j){
    if(j > nums.size()) return true;
    if(nums[i] > nums[j]) return false;
    return isSorted(nums , i + 1 , j + 1);

}
// int linearSearch(vector<int>nums , int i , int target){
//     if(i >= nums.size()) return -1;
//     if(nums[i] == target) return i;
//     return linearSearch(nums , i+1 , target);
// }
vector<int> linearSearch(vector<int>nums , int i , int target , vector<int> ansList){
    if(i >= nums.size()) return ansList;
    if(nums[i] == target) ansList.push_back(i);
    return linearSearch(nums , i+1 , target , ansList);
}
// printing pattersns
void PrintT(int r , int c){
    if(c == 0) return;
    if(c < r){
        cout<<"*";
        PrintT(r , c + 1);
    }
    else{
        cout<<endl;
        PrintT(r - 1 , 0);
    }
}

void printSubS(int idx , vector<int> &nums , vector<int> &ans , int n){
    if(idx >= n){
        for(auto it : ans){
            cout<<it<<" ";
        }
        if(ans.size() == 0 ){
            cout<<"{}";
        }
        cout<<endl;
        return;

    }
    ans.push_back(nums[idx]);
    printSubS(idx+1 , nums , ans , n);
    ans.pop_back();
    printSubS(idx+1 , nums, ans , n);
}

int main(){
    vector<int> nums = {3,1,2};
    vector<int> ans;
    int n = nums.size();
    printSubS(0 , nums , ans , n);

}