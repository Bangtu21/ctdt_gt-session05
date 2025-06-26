#include <stdio.h>

int fibonaci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    return fibonaci(n - 1) + fibonaci(n - 2);
}

int main() {
    int n;
    do {
        printf("Nhap so n: ");
        scanf("%d", &n);
        if (n<=0) {
            printf("Input khong hop le");
        }
    }while (n<=0);

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonaci(i));
    }
    printf("]");

    return 0;
}
