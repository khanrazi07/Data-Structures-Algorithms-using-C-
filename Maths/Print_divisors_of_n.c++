#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

void printDivisor(int n , vector<int>& ans , int i){
    if(i == n){
        ans.push_back(i);
        return;
    }
    if(n%i == 0){
        ans.push_back(i);
    }
    printDivisor(n , ans , i + 1);

}

void opt(int n , vector<int>& ans){
    for(int i = 0 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            ans.push_back(i);
            if(n/i != i){
                ans.push_back(n/i);
            }
        }
    }
}

int main(){
    // the problem is we get a number in our input and we have to print all the divisors of it
    vector<int> ans;
    int n;
    cin>>n;
    // for(int i = 1 ; i <= n ; i++){
    //     if(n % i == 0){
    //         ans.push_back(i);
    //     }
    // }
    opt(n , ans);
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;

    // now we do with a more optimal way with time complexity of O(sqrt(n))
}
