#include<stdio.h>

int main(){
    float n1 = 0, n2 = 0, n3 = 0;
    float array[3];
    int longitud;
    int i;

    printf("ingresa un numero\n");
    scanf("%f", &n1);
    printf("ingresa otro numero\n");
    scanf("%f", &n2);
    printf("ingresa un ultimo numero\n");
    scanf("%f", &n3);

    array[0] = n1;
    array[1] = n2;
    array[2] = n3;

    longitud = sizeof(array) / sizeof(array[0]);
    printf("%d", longitud);
    //printf("%f", array[0]);

    for(i = 0; i < =longitud; i++){
        printf("%f", array[i]);
        i++;
    }

    return 0;
}
