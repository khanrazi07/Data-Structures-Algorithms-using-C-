#include<iostream>
#include<algorithm>
using namespace std;
#include<unordered_map>
#include<vector>
int main(){
    vector <int>  arr = {1,2,3,1,2,2,5,7,8,5,5,3,2,5,6};
    int n = arr.size();
    // now lets say with the help of array we have to cont the occurence of the maximmum number in this array
    int max = *max_element(arr.begin() , arr.end());
    int hash[15] = {0};
    for(int i = 0 ; i < arr.size() ; i++){
        hash[arr[i]]++;
    }
    cout<<(hash[max])<<endl;
    cout<<max<<endl;

}