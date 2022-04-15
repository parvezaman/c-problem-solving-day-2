#include <stdio.h>

int main()
{
    int workingHour, month;
    printf("Input the working hrs: ");
    scanf("%d", &workingHour);
    printf("Salary ammount/hr: ");
    scanf("%d", &month);

    double total = (double)workingHour * (double)month;
    printf("Salary = %.2lf", total);

    return 0;
}