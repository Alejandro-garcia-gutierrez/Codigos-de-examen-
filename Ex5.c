#include<stdio.h> 
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        12 mayo 21 */

        float numerodepersonas, numerodealimentos, porciones;
        printf("\n\n García Gutiérrez Alejandro");
        printf("\n programa 1");
        printf("\n\n dame el número de personas");
        scanf("%f", &numerodepersonas);
        printf("\n\n dame el número de alimentos");
        scanf("%f", &numerodealimentos);
        porciones = numerodepersonas / numerodealimentos;
        printf("\n\n La porción para dividir equitativamente a cada persona es %f", porciones);
        return 0;
}