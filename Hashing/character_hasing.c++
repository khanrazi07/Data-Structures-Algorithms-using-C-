#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s = "abaacdaeafsahagj";

    // Frequency array for lowercase letters
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    // Frequency of 'a' in the string
    cout << "Frequency of 'a': " << hash['a' - 'a'] << endl;

    return 0;
}
