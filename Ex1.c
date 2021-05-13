#include<stdio.h> 
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        12 mayo 21 */

        float primer, segundo, multiplica, division;
        printf("\n\n García Gutiérrez Alejandro");
        printf("\n programa 3");
        printf("\n\n Saca el promedio de valores reales");
        printf("\n\n Dame el primer valor real");
        scanf("%f", &primer);
        printf("\n\n Dame el segundo valor real");
        scanf("%f", &segundo);
        multiplica = primer * segundo;
        division = primer / segundo;
        printf("\n\n El producto es %f", multiplica);
        printf("\n\n El cociente es %f", division);
        return 0;
}