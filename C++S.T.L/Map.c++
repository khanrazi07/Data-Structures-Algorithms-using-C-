#include<iostream>
using namespace std ;
#include<map>
#include<vector>
#include<unordered_map>

int main(){
    vector <int> nums = {1,1,2,2,3,3,3,4,5,6};
    unordered_map <int , int > st ;
    int n = nums.size();
    int count = 0 ;
    for(int num : nums){
        st[num]++;
    }
    
    cout<<st[1]<<endl;

    map <char , int > mp ;
    mp['r'] = 1;
    mp['z'] = 2;
    mp['i'] = 8;
    for(auto p : mp){
        cout<<p.first << " " << p.second<<endl;
    }
    if(mp.find('z') != mp.end()){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not Found"<<endl;
    }
    return 0 ; 
}