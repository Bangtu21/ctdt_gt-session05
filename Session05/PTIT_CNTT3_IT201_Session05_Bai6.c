#include <stdio.h>
#include <stdlib.h>

int sumArr(int *arr, int n) {
    if(n == 0) {
        return 0;
    }
    return arr[n - 1] + sumArr(arr, n - 1);

}

int main() {
    int n;
    printf("Nhap vao mot so n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Khong du bo nho");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int result = sumArr(arr, n);
    printf("%d", result);
    return 0;
}
