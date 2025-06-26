#include <stdio.h>


/**
 * Hàm in ra các sô từ 1 đến n
 * @param currentNumber số hiện tại mặc định = 0
 * @param n số giới hạn
 */
void printNumbers(int currentNumber, int n) {
    //Điều kiện để dừng
    if (currentNumber > n) {
        return;
    }

    //In ra gi trị hiện tại của currentNumber
    printf("%d\n", currentNumber);

    //Gọi lại chính nó
    printNumbers(currentNumber + 1, n);
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printNumbers(1, n);
    return 0;
}