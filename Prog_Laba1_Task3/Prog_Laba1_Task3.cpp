#include <iostream>
#include <cstdio>
#pragma warning(disable:4996)

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char* mystrcat(char* to, const char* from);
    char destStr[40], srcStr[20];

    printf("Enter destination string: "); scanf("%s", &destStr);
    printf("Enter source string: "); scanf("%s", &srcStr);
    printf("First Result: %s \n", mystrcat(destStr, srcStr));

    printf("Enter source string: "); scanf("%s", &srcStr);
    mystrcat(destStr, srcStr);
    printf("Second result: %s", destStr);

}

char* mystrcat(char* str1, const char* str2) {
    char* begin = str1;
    while (*str1) str1++;

    while (*str1++ = *str2++);

    *str1 = '\0';
    return begin;
}