#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("%d ... %d\n", atoi(argv[1]) / atoi(argv[2]), atoi(argv[1]) % atoi(argv[2]));
}