#include <stdio.h>

int main()
{
    int x = 5;                  // x, y are ints
    int y = 1;
    int *p;                     // p, q are addresses of ints
    int *q;

    p = &x;                     // p gets address of x
    y = *p;                     // y gets value at address in p
    printf("y = %d\n", y);

    q = p;                      // q gets same address as p

    printf("*p = %d    *q = %d\n", *p, *q); 
}