#include <stdio.h>
int main()
{
    int inputDays, days, month, year;
    printf("Input no. of days: ");
    scanf("%d", &inputDays);
    year = inputDays / 365;
    month = (inputDays % 365) / 30;
    days = (inputDays % 365) % 30;

    printf("%d Year(s)\n", year);
    printf("%d Month(s)\n", month);
    printf("%d Day(s)\n", days);
    return 0;
}