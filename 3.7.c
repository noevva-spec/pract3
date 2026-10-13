#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"
int main(void){
    const char r[] = "2026";
    printf("DISTRO: %s\n", DISTRO);
    printf("rdate: %s\n", r);
    printf("strlen: %zu\n", strlen(DISTRO));
    printf("sizeof: %zu\n", sizeof(DISTRO));
    return 0;

}