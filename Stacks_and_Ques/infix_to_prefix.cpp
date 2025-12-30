#include<iostream>
using namespace std;
#include<stack>
#include<string>
#include<algorithm>

int priority(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return -1;
}

string infix_2_prefix(string s){
    stack<char> st;
    string ans = "";
    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        
        // operand
        if(isalnum(s[i])){
            ans += s[i];
        }
        
        // reversed '(' becomes ')'
        else if(s[i] == ')'){
            st.push(s[i]);
        }

        // reversed ')' becomes '('
        else if(s[i] == '('){
            while(!st.empty() && st.top() != ')'){
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); // pop ')'
        }

        // operator
        else {
            if(s[i] == '^'){  // right associative
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }
            else{ // left associative
                while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string s = "(A+B)*C-D+F";
    string sol = infix_2_prefix(s);
    cout << sol << endl;
}
