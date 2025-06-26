#include <stdio.h>

int sumNumbers(int first, int second) {
    if (first > second) {
        return 0;
    }

    return second + sumNumbers(first, second-1);
}

int main() {
    int first, second;
    do {
        printf("Nhap firstNumber: ");
        scanf("%d", &first);
        printf("Nhap secondNumber: ");
        scanf("%d", &second);
        if (first==second) {
            printf("Khong hop le\n");
        }
        if (first>second) {
            printf("Khong hop le\n");
        }
        if (first<0 || second<0) {
            printf("Khong hop le\n");
        }
    }while (first<0 || second<0 || first>second || first==second);

    int result = sumNumbers(first, second);
    printf("%d", result);

    return 0;

}
