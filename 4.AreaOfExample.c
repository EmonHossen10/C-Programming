#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter the radius of circle :");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of Circle is : %.2f\n", area);
    return 0;
}