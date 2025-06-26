#include <stdio.h>

int sumNumber(int n) {
    if (n==0) {
        return 0;
    }
    return n + sumNumber(n-1);
}

int main() {
    int n;
    do {
        printf("Nhap so n: ");
        scanf("%d", &n);
        if (n<=0) {
            printf("Khong hop le\n");
        }
    }while (n<=0);

    int result = sumNumber(n);
    printf("%d\n", result);
    return 0;
}
