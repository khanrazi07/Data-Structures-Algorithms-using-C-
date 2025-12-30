#include<string>
#include<vector>
#include<iostream>
using namespace std;


vector<string> split(string s){
    int n = s.size();
    vector<string> ans;
    string word = "";
    for(int i = 0 ; i < n ; i++){
        if(s[i] == ' '){
            if(!word.empty()){
                ans.push_back(word);
                word = "";
            }    
        }
        else{
            word += s[i];
        }
        
    }
    if(!word.empty()){
        ans.push_back(word);
    }
    return ans;
}

int main(){

    string s;
    getline(cin , s);
    vector<string> S_vector = split(s);
    cout<<S_vector[2];

}