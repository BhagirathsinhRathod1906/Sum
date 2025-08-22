#include <stdio.h>
int main() {
    long bytes;
    float kb, mb, gb;
    printf("Enter bytes: ");
    scanf("%ld", &bytes);
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    printf("%ld bytes = %.2f KB = %.2f MB = %.2f GB\n", bytes, kb, mb, gb);
    return 0;
}