#include <stdio.h>

int main()
{
    int value = 250;
    int *ptr = &value;
    int **ptr2 = &ptr;

    printf("Value using single dereference: %d\n", *ptr);
    printf("Value using double dereference: %d\n", **ptr2);

    return 0;
}
