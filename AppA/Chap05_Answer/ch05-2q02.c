#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    for (i = 1; i < argc;) {
        puts(argv[i]);
        i++;
    }
}