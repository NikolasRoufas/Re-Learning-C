#include <stdio.h>
// Find Maximum in an Array

int findMax(int arr[], int n);

void runTests() {
    int test1[] = {2, 8, 1, 4, 6};
    int result1 = findMax(test1, 5);
    printf("Test 1: %s\n", result1 == 8 ? "Passed" : "Failed");

    int test2[] = {-3, -7, -1, -5};
    int result2 = findMax(test2, 4);
    printf("Test 2: %s\n", result2 == -1 ? "Passed" : "Failed");

    int test3[] = {42};
    int result3 = findMax(test3, 1);
    printf("Test 3: %s\n", result3 == 42 ? "Passed" : "Failed");
}

int main() {
    runTests();
    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i=1;i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
