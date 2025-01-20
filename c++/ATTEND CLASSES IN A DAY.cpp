#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int attend(vector<pair<int, int>> lec){
    sort(lec.begin(), lec.end());
    int count = 0, last = 0;
    for (const auto& lecture : lec) {
        if (lecture.second >= last) {
            count++;
            last = lecture.first;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> lec(n);
    for (int i = 0; i < n; i++) {
        cin >> lec[i].second >> lec[i].first;
    }
    cout << attend(lec);
    return 0;
}