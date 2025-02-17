#include <stdio.h>
#include <limits.h>  // For INT_MIN

// Function to find the maximum in an array
int findMax(const int arr[], int n) {
    if (n <= 0) {
        printf("Error: Array is empty or has invalid size.\n");
        return INT_MIN;  // Return the smallest integer as an error indication
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Test cases
void runTests() {
    int test1[] = {2, 8, 1, 4, 6};
    printf("Test 1: %s\n", findMax(test1, 5) == 8 ? "Passed" : "Failed");

    int test2[] = {-3, -7, -1, -5};
    printf("Test 2: %s\n", findMax(test2, 4) == -1 ? "Passed" : "Failed");

    int test3[] = {42};
    printf("Test 3: %s\n", findMax(test3, 1) == 42 ? "Passed" : "Failed");

    int test4[] = {-10, -20, -30, -5, -15};
    printf("Test 4: %s\n", findMax(test4, 5) == -5 ? "Passed" : "Failed");

    int emptyTest[] = {};
    printf("Test 5: %s\n", findMax(emptyTest, 0) == INT_MIN ? "Passed" : "Failed");
}

// Main function
int main() {
    runTests();
    return 0;
}
