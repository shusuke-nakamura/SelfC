#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; ; i++) {
        if (i < argc) {
            puts(argv[i]);
        }
    }
}