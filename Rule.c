#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;

    if (lastDigit == 0 || lastDigit == 5)
        printf("%d is divisible by 5", num);
    else
        printf("%d is not divisible by 5", num);

    return 0;
}
