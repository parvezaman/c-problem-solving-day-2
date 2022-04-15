#include <stdio.h>

int main()
{
    float userNumber;
    printf("Enter Number: ");
    scanf("%f", &userNumber);

    int integerPart = userNumber;
    printf("Integer part: %d\n", integerPart);
    printf("Real part: %f", userNumber - (float)integerPart);

    return 0;
}