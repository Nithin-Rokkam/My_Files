#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 4, 6};  // Sample array
    vector<vector<int>> res;      // To store the subarrays
    int L = 3;                    // Minimum sum
    int R = 8;                    // Maximum sum
    
    sort(arr.begin(), arr.end()); // Sorting the array (if required)
    
    int slide = 0;  // To keep track of the current window sum
    int i = 0, j = 0;  // Left and right pointers
    while (j < arr.size()) {
        slide += arr[j];  // Add the current element to the window
        j++;  // Expand the window
        
        // Check if the sum is within the desired range
        while (slide >= L && slide <= R) {
            // Store the subarray from i to j
            vector<int> ans;
            for (int k = i; k < j; k++) {
                ans.push_back(arr[k]);
            }
            res.push_back(ans);
            
            // Shrink the window from the left
            slide -= arr[i];
            i++;
        }
    }
    
    // Print the result subarrays
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
