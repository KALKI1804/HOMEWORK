#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (num > 0) {
            factorial *= num;
            num--;
        }

        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}
