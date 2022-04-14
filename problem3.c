#include <stdio.h>

int main()
{
    int first_number, second_number;
    printf("First number: ");
    scanf("%d", &first_number);
    printf("Second number: ");
    scanf("%d", &second_number);

    int sum = first_number + second_number, difference = first_number - second_number, product = first_number * second_number, quotient = first_number / second_number, modulus = first_number % second_number;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Modulus = %d\n", modulus);

    return 0;
}