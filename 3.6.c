#include <stdio.h>
#include <string.h>
int main(void){
    char st[30];
    int width;
    scanf("%s %d", st, &width);
    printf("%*s\n", width, st);
    printf("%-*s\n", width + 5, st); // * - взятие ширины из переменной

    return 0;
}