#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change(char *str, int strLength) {
    if (strLength == 0) {
        return 0;
    }

    int lastDigit = str[strLength-1]-'0';

    return change(str, strLength-1) * 10 + lastDigit;

}

int main() {
    char str[100];
    printf("Nhap mot chuoi ky tu: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    int strLength = strlen(str);

    for (int i=0; i<strLength; i++) {
        if (!isdigit(str[i])) {
            printf("Input khong hop le");
            return 1;
        }
    }

    int result = change(str, strLength);
    printf("%d", result);


    return 0;

}
