#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char* mystrcat(char* to, const char* from);
    char destStr[40], srcStr[20];

    cout << "Enter destination string: "; cin >> destStr;
    cout << "Enter source string: "; cin >> srcStr;
    cout << "First Result: " << mystrcat(destStr, srcStr) << endl;

    cout << "Enter source string: "; cin >> srcStr;
    mystrcat(destStr, srcStr);
    cout << "Second result: " << destStr;

}

char* mystrcat(char* str1, const char* str2) {
    char* begin = str1;
    while (*str1) str1++;

    while (*str1++ = *str2++);

    *str1 = '\0';
    return begin;
}