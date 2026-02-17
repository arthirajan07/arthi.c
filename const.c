#include <stdio.h>
#define PI 3.14
int main()
{
    float radius, area;
    printf("Enter r value:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area %f", area);
    return 0;
}