#include <stdio.h>

int main()
{
    int first_number, second_number;
    printf("Input the first integer: ");
    scanf("%d", &first_number);
    printf("Input the second integer: ");
    scanf("%d", &second_number);

    int product_numbers = first_number * second_number;

    printf("Product of the above two integers = %d", product_numbers);

    return 0;
}