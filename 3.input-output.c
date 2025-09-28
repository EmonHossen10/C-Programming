#include <stdio.h>
int main()
{

    printf("Enter Your Age :");
    int age;
    scanf("%d", &age);
    printf("Your Age is : %d\n", age);
    // summation of two numbers
    int a, b;
    printf("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);

    int sum = a + b;
    printf("Your Sum Result is : %d", sum);

    return 0;
}