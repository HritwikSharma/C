#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Merge function
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }

    free(L);
    free(R);
}

// Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Generate inputs
void generateBestCase(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = i;  // already sorted
}

void generateWorstCase(int arr[], int n) {
	int a=0;
    for (int i = n; i >= 0; i--)
        arr[a] = i;
		a=a+1;  // descending order
}

void generateAverageCase(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = n;  // fixed pattern, not random
}

// Test function with timing
void testCase(void (*generator)(int[], int), int n, const char *caseName) {
    int *arr = (int *)malloc(n * sizeof(int));
    generator(arr, n);

    clock_t start = clock();
    mergeSort(arr, 0, n - 1);
    clock_t end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("%s: %.6f seconds\n", caseName, time_taken);

    free(arr);
}

int main() {
    int n = 100000;  // Fixed array size

    testCase(generateBestCase, n, "Best Case (Already Sorted)");
    testCase(generateAverageCase, n, "Average Case (Fixed Pattern)");
    testCase(generateWorstCase, n, "Worst Case (Reverse Sorted)");

    return 0;
}

