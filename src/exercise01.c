#include <stdio.h>

int main(int argc, char *argv){
    float x = 0;
    float area = 2 * x;
    float volume = 3 * x;

    printf("Enter side lenght: ");
    scanf("%f", x);
    printf("The area is:%2f \nThe volume is:%2f\n", area, volume);
    return 0;
}