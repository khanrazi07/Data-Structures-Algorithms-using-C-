#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string st, int l, int r) {
    if (l >= r) {
        return true;
    }
    if (st[l] != st[r]) {
        return false;
    }
    return checkPalindrome(st, l + 1, r - 1);
}

int main() {
    string st = "MADAM";
    int l = 0;
    int r = st.size() - 1;
    
    if (checkPalindrome(st, l, r)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
