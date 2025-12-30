#include<iostream>
using namespace std;
#include<stack>
#include<string>

string prefixTOinfix(string &s){
    // Write your code here.
    stack<string> st;
    for(int i = s.size() -1 ; i >= 0 ; i--){
        char ch = s[i];
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string ans = "(" + t1 + string(1,ch) + t2 + ")";
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string s = "+12";
    string answer = prefixTOinfix(s);
    cout<<answer<<endl;
}