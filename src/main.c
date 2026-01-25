#include <stdio.h>

int is_even(int x){
        if(x % 2 == 0){
            return 1;
        }
        else if(x % 2 == 1 || -1){
            return 0;
        }
}
int main(){
    int num;
    printf("Ingrese un numero:");
    scanf("%i", &num);
    if(num == 0){
        printf("You can not divide by 0 \n");
    }
    else if(is_even(num) == 1){
        printf("El numero es par\n");
    }
    else if(is_even(num) == 0){
        printf("El numero es impar\n");
    }
    return 0;
}