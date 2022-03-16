#include "main.h"
#include "stdio.h"

void positive_or_negative(int r)
{
    if (r > 0)
    {
        printf("%d is positive\n", r);
    }
    else if (r < 0)
    {
        printf("%d is negative", r);
    }
    else if (r == 0)
    {
        printf("%d is zero", r);
    }
}
