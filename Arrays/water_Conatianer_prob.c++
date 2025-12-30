/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int max = 0;
    // here we do this question wiht the brute force
    int left = 0;
    int right = 1;
    int singleHeight;
    while(right < height.size()){
        singleHeight = min(height[left] , height[right]);
        int area = singleHeight * (right - left);
        if(area > max){
            max = area;
        }
        else{
            right++;
            left ++;
        }
        
    }
    return max;
}