#include <stdio.h>
int main()
{
    double farenheit, celcius;
    printf("Temperature in fahrenheit = ");
    scanf("%lf", &farenheit);

    celcius = (farenheit - 32) / 1.8;

    printf("Temperature in celsius = %.2lf degree celcius", celcius);

    return 0;
}