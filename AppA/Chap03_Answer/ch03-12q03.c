#include <stdio.h>
#include <limits.h>

int main(void)
{
    long long ll = INT_MAX;
    ll *= INT_MAX;
    printf("%lli\n", ll);
}