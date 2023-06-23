#include "main.h"

/**
 *main - Determines if the number is positive, negative or zero.
 *0 : is the number to be checked.
 *return 0 (Success)
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
