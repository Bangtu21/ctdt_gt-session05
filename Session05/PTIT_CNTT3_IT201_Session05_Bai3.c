#include <stdio.h>

int factorial(int n) {
    if (n<0) {
        return 0;
    }
    if (n==0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int n;
    do {
        printf("Nhap so n: ");
        scanf("%d", &n);
        if (n<0) {
            printf("Khong hop le\n");
        }
    }while (n<0);

    int result = factorial(n);
    printf("%d\n", result);

    return 0;
}