#include <iostream>
#include <vector>
using namespace std;

void findDuplicates(vector<int>& nums) {
    bool found = false;
    int n = nums.size();
    
    cout << "Duplicates found in the array: ";
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j]) {
                cout << nums[i] << " ";
                found = true;
                break; // break inner loop to avoid duplicate print
            }
        }
    }
    
    if (!found) {
        cout << "No duplicates found in the array.";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    findDuplicates(nums);

    return 0;
}

