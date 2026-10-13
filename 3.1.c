#include <stdio.h>
#include <string.h>
int main (void){
    char s[20] = "SibSUTIS";
    printf("English\n");
    printf("SIZEOF: %zu\n", sizeof(s)); //выводит размер массива в байтах
    printf("STRLEN: %zu\n", strlen(s)); //выводит длину строки
    printf("Free_bytes: %zu\n", sizeof(s) - strlen(s) - 1); // выводит кол-во своб. байт в массиве
    
    char s1[20] = "СибГУТИ";
    printf("Russian\n");
    printf("Sizeof: %zu\n", sizeof(s1));
    printf("Strlen: %zu\n", strlen(s1));
    printf("Free_bytes: %zu\n", sizeof(s1) - strlen(s1) - 1);

    return 0;

}