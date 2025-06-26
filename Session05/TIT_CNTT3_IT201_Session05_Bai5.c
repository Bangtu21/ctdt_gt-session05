#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end ){
    // Điều kiện dừng
    if (start >= end){
        return 1;
    }

    //  Kiểm tra 2 chuỗi xem có giống nhau không
    if (str[start] !=  str[end]) {
        return 0;
    }

    // Công thức
    return  isPalindrome(str, start + 1, end - 1);
}

int main(){
    char str[100];
    printf("Nhap mot chuoi: ");
    scanf(" ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int strLength = strlen(str);

    int result =  isPalindrome(str, 0, strLength - 1);

    if(result == 0){
        printf("Palindrome invalid\n");
    } else {
        printf("Palindrome valid\n");
    }
}