#include <bits/stdc++.h>
using namespace std;

int gfd(int num) {
    while (num >= 10) 
    {
        num /= 10;
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(gfd(t));
    }

    sort(v.begin(), v.end(), greater<int>());
    string largest = "";
    for (int i : v) {
        largest += to_string(i);
    }

    cout << largest << endl;
    return 0;
}