#include<iostream>
using namespace std;
#include<string>
#include<stack>

string postfixToPrefix(string &s){
    // Write your code here.
    stack<string> st;
    for(int i = 0 ; i < s.size() ; i++){
        char ch = s[i];
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string t1 = st.top() ; st.pop();
            string t2 = st.top() ; st.pop();
            string ans = string(1,ch) + t2 + t1;
            st.push(ans);
        }
    }
    return st.top();
}