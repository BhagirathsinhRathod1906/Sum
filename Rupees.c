#include <stdio.h>
int main() {
    float dollars, rupees;
    printf("Enter rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / 48;
    printf("%.2f Rs = %.2f dollars\n", rupees, dollars);
    return 0;
}