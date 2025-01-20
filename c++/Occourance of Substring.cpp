#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findd(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        bool flag = false;

        for (int i = 0; i <= n - m; i++) {
            if (str1.substr(i, m) == str2) {
                cout << i << " ";  
                flag = true;
            }
        }
        if (!flag) {
            cout << -1;
        }
    }
};

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    
    Solution solution;
    solution.findd(str1, str2);

    return 0;
}