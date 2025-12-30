// majority element question using brute force method
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> nums = {1,2,2,2,1,1,2};
    // we have ti find the majority element here we have a condtion that majority elemnet is always > n/2 
    int n = nums.size();
    int freq = 0;
    int MJ = 0;

    for(int val : nums){
        int freq = 0 ;
        for(int el : nums){
            if(el == val){
                freq++;

            }
        }
        if(freq > n/2){
            MJ = val;
            break;
        }
        
    }
    cout<<"the majority element is: "<<MJ<<endl;
    return 0;
    
}