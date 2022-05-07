#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;

    do
    {
        system("cls");
        printf("Indique un dia de [1 a 31]: ");
        scanf("%d",&dia);
        fflush(stdin);

    }
    while(dia<1||dia>31);
    do
    {
        printf("Indique un mes de [1 a 12]: ");
        scanf("%d",&mes);
        fflush(stdin);
    }
    while(mes<1||mes>31);
    printf("El dia es: %d\n",dia);
    printf("El mes es: %d",mes);

    return 0;
}
