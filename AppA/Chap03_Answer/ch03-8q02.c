#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t x = -10;
    uint32_t y = x;
    printf("%d, %d\n", x, y);
}