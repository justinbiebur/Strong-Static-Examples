#include <stdio.h>

int main() {
     int a = 17;
    float b = 21.5;
    void *ptr;

    ptr = &a;
    printf("Value of a: %d\n", *(int *)ptr); // Casting void* to int*

    ptr = &b;
    printf("Value of b: %f\n", *(float *)ptr); // Casting void* to float*

    return 0;
}
