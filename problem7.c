#include <stdio.h>
int main()
{
    double celcius, farenheit;
    printf("Enter temperature in Celsius = ");
    scanf("%lf", &celcius);

    farenheit = (celcius * 1.8) + 32;

    printf("Temperature in Fahrenheit = %.1lf", farenheit);

    return 0;
}