#include<iostream>
using namespace std;
#include<stack>
#include<string>

string prefix_to_postfix(string s){
    stack<string> st;
    for(int i = s.size()-1 ; i >= 0 ; i--){
        char ch = s[i];
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string t1 = st.top();st.pop();
            string t2 = st.top();st.pop();
            string ans  = t1 + t2 + string(1,ch);
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string s = "+-ABc";
    string answer = prefix_to_postfix(s);
    cout<<answer<<endl;
}