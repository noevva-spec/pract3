#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    wchar_t poz[50];
    wscanf(L"%ls", poz);
    wprintf(L"агент %ls авторизован в системе\n", poz);
    return 0;
}