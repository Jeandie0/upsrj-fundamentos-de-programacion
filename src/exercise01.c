#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double x;

    printf("Enter side lenght: ");
    scanf("%lf", &x);
    double area = pow(x, 2);
    double volume = pow(x, 3);
    printf("The area is: %.2f \nThe volume is: %.2f\n", area, volume);
    return 0;
}