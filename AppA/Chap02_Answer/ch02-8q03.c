#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y)
{
    return x + y;
}

int main(int argc, char *argv[])
{
    return sum(atoi(argv[1]), atoi(argv[2]));
}