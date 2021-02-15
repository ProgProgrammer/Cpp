#include <stdio.h>
#include <conio.h>
#include <inttypes.h>

int main()
{
    int16_t number = 4;
    int16_t result;
    __asm {
        MOV AX, number;
        SUB AX, 5;
        MOV result, AX;
    }
    printf("%d", result);
    _getch();
    return 0;
}