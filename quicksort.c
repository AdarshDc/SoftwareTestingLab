#include<stdio.h> 

void quicksort(int x[], int first, int last) {
    if (first < last) {
        int pivot = first;
        int i = first;
        int j = last;
        
        while (i < j) {
            while (x[i] <= x[pivot] && i < last)
                i++;
            while (x[j] > x[pivot])
                j--;
            if (i < j) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        
        int temp = x[pivot];
        x[pivot] = x[j];
        x[j] = temp;
        
        quicksort(x, first, j - 1);
        quicksort(x, j + 1, last);
    }
}

int main() {
    int a[20], i, key, n; 
    
    printf("Enter the size of the array (maximum 20 elements): ");
    scanf("%d", &n);
    
    if (n > 0 && n <= 20) {
        printf("Enter the elements of the array: ");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        quicksort(a, 0, n - 1);
        
        printf("The elements in the sorted array are:\n");
        for (i = 0; i < n; i++)
            printf("%d\t", a[i]);
        printf("\n");
    }
    else {
        printf("Invalid size of the array\n");
    }
    
    return 0;
}
