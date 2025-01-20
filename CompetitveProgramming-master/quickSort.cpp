#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[e]; // Choose the last element as pivot
    int i = s - 1; 4     // Index of the smaller element

    for (int j = s; j < e; j++) {
        if (arr[j] < pivot) {
            i++; // Increment index of the smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]); // Place pivot in the correct position
    return i + 1;             // Return pivot index
}

void quicksort(int arr[], int s, int e) {
    if (s < e) {
        int p = partition(arr, s, e); // Partition the array
        quicksort(arr, s, p - 1);     // Sort the left subarray
        quicksort(arr, p + 1, e);     // Sort the right subarray
    }
}

int main() {
    int arr[5] = {2, 3, 6, 7, 1};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
