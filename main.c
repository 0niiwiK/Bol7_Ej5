#include <stdio.h>

int main() {
    int num,max=0,haynegativo=0;
    printf("Introduce un numero (0 para terminar): ");
    scanf("%d",&num);
    while (num!=0){
        if (num>max)
            max=num;
        if (num<0)
            haynegativo=1;
        printf("Introduce un numero: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    printf("El mayor valor es: %d",max);
    if (haynegativo)
        printf("\nSe ha leido al menos un numero negativo.");
    else
        printf("\nNo se ha leido ningun numero negativo.");
}
