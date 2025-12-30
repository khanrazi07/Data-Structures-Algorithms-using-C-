#include<iostream>
#include<string>
#include<stack>
using namespace std;

string postfix_to_infixx(string s){
    stack<string> st;
    for(int i = 0 ; i < s.size();i++){
        char ch = s[i];
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string t1 = st.top();st.pop();
            string t2 = st.top();st.pop();
            string ans = "(" + t2 + ch + t1 + ")";
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string s = "AB+";
    string answer = postfix_to_infixx(s);
    cout<<answer<<endl;
}