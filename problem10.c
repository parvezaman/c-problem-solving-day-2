#include <stdio.h>
int main()
{
    float weight1, number1, weight2, number2, average;

    printf("Weight - Item1: ");
    scanf("%f", &weight1);
    printf("No. of item1: ");
    scanf("%f", &number1);
    printf("Weight - Item2: ");
    scanf("%f", &weight2);
    printf("No. of item2: ");
    scanf("%f", &number2);
    average = (weight1 * number1 + weight2 * number2) / (number1 + number2);
    printf("Average value = %f", average);
    return 0;
}