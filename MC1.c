#include <stdio.h>

int sumOfOddNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Array size must be greater than zero.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int oddSum = sumOfOddNumbers(arr, n);
    printf("The sum of odd numbers in the array is: %d\n", oddSum);

    return 0;
}




