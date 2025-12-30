// this is an optimal appraoch for the pairSum question here we do the two pointer appraoch

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> nums = {2,7,11,15,20};
    int target = 26;

    int st = 0;
    int end = nums.size() - 1 ;

    while(st < end){

        int pairSum = nums[st] + nums[end];

        if(pairSum > target){
            end--;

        }
        if(pairSum < target){
            st++;
        }
        if(pairSum == target){
            cout<<"the answer is: " << pairSum <<endl;
            break;
        }
    }
    return 0;
}