#include <stdio.h>
#include <string.h>
int main(void){
    char name[20];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"\t %s \t\"\n", name);
    return 0;

}