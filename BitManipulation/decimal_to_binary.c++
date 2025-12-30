#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<cmath>

string decimal_to_bin(int n){
    string res = "";
    if(n == 0 ) return "0";
    while(n > 0){
        if(n%2 == 1) res+= '1';
        else res += '0';
        n = n/2;
    }
    reverse(res.begin() , res.end());
    return res;
}

int binary_to_decimal(string s){
    reverse(s.begin() , s.end());
    int num = 0;
    for(int i = 0 ; i < s.size() ; i++){
        num += (s[i]-'0')*pow(2,i);
    }
    return num;
}

string ones_complement(int n){
    string num = decimal_to_bin(n);
    for(int i = 0 ; i < num.size();i++){
        if(num[i] == '1') num[i] = '0';
        else num[i] = '1';
    }
    return num;

}
int main(){
    int n;
    cin>>n;
    string ans = ones_complement(n);
    cout<<ans<<endl;

}