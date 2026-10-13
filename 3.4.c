#include <stdio.h>
#include <string.h>
int main(void){
    char s[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    // \t - это табуляция, отступ
    printf("%s\n", s);
    printf("strlen: %zu\n", strlen(s));
    printf("sizeof: %zu\n", sizeof(s));
    // \x48 = 72 = H
    // \x65 = 101 = e
    // \x6C = 108 = l
    // \x6F = 111 = o
    // \x57 = 87 = W
    // \x72 = 114 = r
    // \x64 = 100 = d
    return 0;
}