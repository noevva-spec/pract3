#include <stdio.h>
int main(void){
    char x;
    scanf("%c", &x);
    printf("code_dec: %d\n", x);
    printf("code_hex: %x\n", x);
    printf("code_oct: %o\n", x);
    printf("upper: %c\n", x - 32);
    printf("next: %c\n", x + 1);
    printf("prev: %c\n", x - 1);

    return 0;
}