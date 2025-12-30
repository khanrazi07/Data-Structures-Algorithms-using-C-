#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return -1;
}

string infix_to_postfix(string s) {
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        // Operand
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9')) {
            ans += ch;
        }

        // Opening bracket
        else if (ch == '(') {
            st.push(ch);
        }

        // Closing bracket
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }

        // Operator
        else {
            while (!st.empty() && priority(ch) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Empty the stack
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string s = "a+b*(c^d-e)";
    string conversion = infix_to_postfix(s);
    cout << conversion << endl;
}
