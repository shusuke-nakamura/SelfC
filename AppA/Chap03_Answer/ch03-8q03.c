#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t x = -10;
    int16_t y = x;
    printf("%d, %d\n", x, y);
}