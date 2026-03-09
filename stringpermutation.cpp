#include <bits/stdc++.h>
using namespace std;

void permute(string &s, int index) {
    if(index == s.size()) {
        cout << s << endl;
        return;
    }

    for(int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        permute(s, index + 1);
        swap(s[index], s[i]); // backtrack
    }
}

int main() {
    string s = "ABC";
    permute(s, 0);
}