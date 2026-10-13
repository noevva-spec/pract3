#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    char cst[] = "я люблю прогу";
    wchar_t wst[] = L"я люблю прогу";
    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(cst), strlen(cst));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(wst), wcslen(wst));
    return 0;
}