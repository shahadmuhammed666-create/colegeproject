#include<stdio.h>
int binarySearch (int arr[], int size, int key){
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid potential overflow

        if (arr[mid] == key) {
            return mid; // Element found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    printf("The array size is: %d\n", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 60;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        printf("Binary search: Element found at index %d\n", result);
    } else {
        printf("Binary search: Element not found.\n");
    }
    return 0;

}