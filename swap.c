#include <stdio.h>
int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;   // store a in temp
    a = b;      // put b into a
    b = temp;   // put temp (old a) into b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}