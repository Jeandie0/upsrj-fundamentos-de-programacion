#include <stdio.h>

int main(int argc, char *argv[])
{
    float x;
    

    printf("Enter side lenght please: ");
    scanf("%f", &x);
    float area = 2 * x;
    float volume = 3 * x;
    printf("The area is:%.2f \nThe volume is:%.2f\n", area, volume);
    return 0;
}