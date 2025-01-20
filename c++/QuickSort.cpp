#include <bits/stdc++.h>
using namespace std;

// Partition function to arrange elements around the pivot
int sort(vector<int>& arr, int first, int last) {
    int pivot = arr[last];
    int i = first - 1;
    
    for (int j = first; j < last; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[last]);
    return i + 1;
}

// QuickSort function
void QuickSort(vector<int>& arr, int first, int last) {
    if (first < last) {
        int p = sort(arr, first, last);
        QuickSort(arr, first, p - 1);
        QuickSort(arr, p + 1, last);
    }
}

int main() {
    vector<int> vc = {2, 3, 1, 5, 4};
    int n = vc.size();
    QuickSort(vc, 0, n - 1);

    for (int i : vc) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

