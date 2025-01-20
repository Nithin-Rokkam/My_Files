#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s; 
    int n = s.length();
    int lps[n]; 
    lps[0] = 0; 

    int i = 0; 
    int j = 1; 

    while (j < n) {
        if (s[j] == s[i]) {
            i++;
            lps[j] = i; 
            j++;
        } else {
            if (i > 0) {
                i = lps[i - 1]; 
            } else {
                lps[j] = 0;
                j++;
            }
        }
    }

    int maxele = 0;
    for (int i = 0; i < n; i++) {
        maxele = max(maxele, lps[i]);
    }

    cout << maxele << endl; 
    return 0;
}
