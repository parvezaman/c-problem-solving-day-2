#include <stdio.h>

int main()
{
    double principle, time, rate;
    printf("Enter principle :");
    scanf("%lf", &principle);
    printf("Enter time :");
    scanf("%lf", &time);
    printf("Enter rate :");
    scanf("%lf", &rate);

    double si = (principle * time * rate) / 100, total = principle + si;

    printf("Simple interest = %lf\n", si);
    printf("Principle + Interest = %.1lf\n", total);
    return 0;
}