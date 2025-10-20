#include <stdio.h>
int main()
{

    // This program converts temperature from Celsius to Fahrenheit
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}