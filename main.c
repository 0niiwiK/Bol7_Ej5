#include <stdio.h>

int main() {
    int estatura,max=0,numalumnos=0;
    float promedio=0;
    printf("Introduce el numero de alumnos de la clase: ");
    scanf("%d",&numalumnos);
    for (int i = numalumnos; i > 0 ; i--) {
        printf("Introduce la estatura del alumno en cm: ");
        scanf("%d",&estatura);
        fflush(stdin);
        if (estatura>max)
            max=estatura;
        promedio+=estatura;
    }
    promedio/=(float)numalumnos;
    printf("La estatura mas alta es de %d cm\n",max);
    printf("El promedio de estaturas de la clase es de %.2f cm",promedio);
    return 0;
}
