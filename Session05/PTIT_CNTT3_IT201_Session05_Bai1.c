#include <stdio.h>

void printNumbers(int n, int currentNumber) {
    if (currentNumber > n) {
        return;
    }
    printf("%d\n", currentNumber);

    printNumbers(n, currentNumber + 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printNumbers(n, 1);

    return 0;
}
