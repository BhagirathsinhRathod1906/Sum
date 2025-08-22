#include <stdio.h>
int main() {
    float H, L, A;
    printf("Enter height and base: ");
    scanf("%f %f", &H, &L);
    A = (H * L) / 2;
    printf("Area of triangle = %.2f\n", A);
    return 0;
}