/*Ingenieria en inteligencia artificial
1BM1 Matemáticas discretas
\n */
#include<stdio.h>
#include<stdlib.h>
int pos[10],bandera;

/*Z=ent, base=bas, la comparacion es para ver si se desborda fuera del valor que
se tiene*/
int operacion(int ent, int bas){

int num=0,comp=0,i=0,rest=ent;
if(ent>0){

while (comp<=ent)
{

comp=pow(bas,i);

if (comp>ent)
{
bandera=i-1;
}

i++;
}
}else{
bandera=0;
}

/*El primer for determina la posicion y el segundo for el valor*/
for ( i=bandera; i>=0; i--)
{

    for (int j=0; j<bas; j++)
    {
    if((rest-j*pow(bas,i))<pow(bas,i)){/*Si el numero que calcula es mayor que el
    numero que se tiene, se tomarÃ¡ la posicion anterior para no sobrepasar e iniciar
    el proceso de nuevo*/

    rest=rest-((j)*pow(bas,i));/*ent+r-p(elevado a la posicion)por el valor de esa
    posicion*/
    pos[i]=j;
    j=bas+1;

    }else{
    if((rest-j*pow(bas,i))==0){
     pos[i]=j;
     j=bas+1;
    }
        }
    }

}

/*Al final tengo que igualar a variables globales para imprimir*/
return 0;
}

int main(){
    int z,base,numfin;
    printf("Introduzca un numero entero para el cambio de base\n");
    scanf("%i",&z);
    printf("Introduzca la base a la que se quiere pasar 2<=base<=16\n");
    scanf("%i",&base);

    operacion(z,base);
    /*Se imprimen las posiciones*/
    system("cls");
    for (int k = bandera; k>=0; k--)
        {

    switch (pos[k])
    {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:

            printf("F");
            break;
        default:
            printf("%i",pos[k]);
            break;
        }
    printf(" representa al entero %i en base %i\n",z,base );
    system("pause");
    return 0;
}
