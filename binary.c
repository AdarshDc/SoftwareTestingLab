#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int a[20], n, key, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the key element to be searched: ");
    scanf("%d", &key);
    
    int result = binarySearch(a, n, key);
    
    if (result != -1) {
        printf("Successful search\nElement found at location %d\n", result + 1);
    } else {
        printf("Key element not found\n");
    }
    
    return 0;
}
