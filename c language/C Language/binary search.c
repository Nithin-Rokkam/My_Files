#include <stdio.h>

int main() {
    int arr[] = {8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element:");
    scanf("%d",&target);
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            found = 1;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", target, left);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

