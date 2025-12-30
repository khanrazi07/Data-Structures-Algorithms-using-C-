#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> nums = {2,7,11,15};
    int target = 18;

    for(int i = 0 ; i < nums.size() ; i++){

        for(int j = i+1 ; j < nums.size() ; j++){

            int pairSum = nums[i] + nums[j];

            if(pairSum == target){
                cout<<"the Maxpair sum find at the indicees:"<<i<<"&"<<j<<endl;
            }
        }
    }
}