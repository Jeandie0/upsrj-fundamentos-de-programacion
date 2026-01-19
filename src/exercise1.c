#include <stdio.h>

int main(){
    float x = 0;
    float area = 2 * x;
    float volume = 3 * x;

    printf("Enter the side length please: ");
    scanf("%f", x);
    printf("square area: %2f\ncube volume: %2f\n", area, volume);
    return 0;
}