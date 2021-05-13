#include<stdio.h> 
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        12 mayo 21 */

        float peso, altura, IMC;
        printf("\n\n García Gutiérrez Alejandro");
        printf("\n programa 7");
        printf("\n\n Calcular el indice de masa corporal");
        printf("\n\n Dame el peso");
        scanf("%f", &peso);
        printf("\n\n Dame la altura");
        scanf("%f", &altura);
        IMC = peso / altura;
        printf("\n\n El indice de masa corporal es %f", IMC);
        return 0;
}