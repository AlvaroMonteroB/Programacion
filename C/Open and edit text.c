/* ▪* 
 * Ingenieria en IA ▪* 
  ▪*/
 #include<stdio.h>/*   []  \n */
 #include<stdlib.h>
 #include<string.h>

 //Este programa escribe y modifica un archivo de texto
 int cadenas,banderilla=0,num;
 
typedef struct{
    char cadena[30],prim,hex[30],xd[30];
    int len,caract,ent,bin;

}Datos;

 



Datos *arreglo;
void IniciarOperaciones(){
 int a,i;
char *aux1;
aux1=(char*)malloc(30*sizeof(char));
/*Se inicia un arreglo de estructuras dinámico*/
printf("Cuantas cadenas quieres escribir?\n");
 scanf("%i",&a);
arreglo=(Datos*)calloc(a,sizeof(Datos));
if (arreglo==NULL)
{
    puts("Se termino la memoria");
    system("pause");
    exit(1);
}   cadenas=a;
    fgets(aux1,30,stdin);
    for ( i = 0; i<a; i++)
    {
        printf("Introduzca la cadena %d\n",i+1);
        fgets(aux1,30,stdin);
        strcpy(arreglo[i].cadena,aux1);
        arreglo[i].cadena[strlen(arreglo[i].cadena)-1]='\0';
    }
    /*Se hace la conversión necesaria para cada cadena
    Ya queda la primera letra, la cadena, su longitud*/
    char *ptend;
    
    
    for ( i = 0; i < a; i++)//con esto se trata cada cadena individualmente
    {
        arreglo[i].caract=strlen(arreglo[i].cadena);//longitud de la cadena de caracteres
       arreglo[i].prim=arreglo[i].cadena[0];//la primera letra de cada cadena se guarda
       
       char *stringarr;
        arreglo[i].bin=0;

             for (int j = 0; j < arreglo[i].caract; j++)//a cada caracter se le sacará su valor por separado
          {
           
           arreglo[i].bin+=(int)(arreglo[i].cadena[j]+'0');//se suma el valor individual de los caracteres 
           
           

           
       }
       itoa(arreglo[i].bin,arreglo[i].hex,16);//se saca su valor hexadecimal del valor anterior
      
        itoa(arreglo[i].bin,arreglo[i].xd,2); //se saca el valor binario

    
    }
    
    
    free(aux1);
    
                        }

    
void orden(){
 int mayor=0;
    for (int i = 0; i < cadenas; i++)
    {
       
        if (arreglo[i].caract>mayor)
        {
            mayor=i;
        }
        
    }
    num=mayor;
}


void guardarTablaEnArchivo(Datos estruct){/*Paso por el valor*/
     FILE * flujo =fopen("Datos.txt","a");
     if (flujo==NULL)
     {
         puts("Error en abrir el archivo\n");
         system("pause");
         exit(1);
     }  
     if(banderilla==0){
     fprintf(flujo,"cadena\t\tbinario\t\tHexadecimal\t\tPrimCaract\t\tInt\n");}
     banderilla=1;
     orden();//imprime la de mas alto valor
     fprintf(flujo,"%s\t%s\t\t%s\t\t\t%c\t\t\t%i\n",arreglo[num].cadena,arreglo[num].xd,arreglo[num].hex,arreglo[num].prim,(int)arreglo[num].cadena[0]);
     for (int i = 0; i<num ; i++)//imprime hasta deternerse el que imprimio antes
     {
       
        fprintf(flujo,"%s\t%s\t\t%s\t\t\t%c\t\t\t%i\n",arreglo[i].cadena,arreglo[i].xd,arreglo[i].hex,arreglo[i].prim,(int)arreglo[i].cadena[0]);
     }
for (int i = num+1; i<cadenas; i++)//imprime desde donde se quedo
     {
       
        fprintf(flujo,"%s\t%s\t\t%s\t\t\t%c\t\t\t%i\n",arreglo[i].cadena,arreglo[i].xd,arreglo[i].hex,arreglo[i].prim,(int)arreglo[i].cadena[0]);
     }

     
fclose(flujo);
 }




 void ImprimirTablaDesdeArchivo(){
FILE * flujo =fopen("Datos.txt","r");
if(flujo==NULL)
{
   puts("Error en abrir el archivo\n");
         system("pause");
         exit(1);
}
char c;

 c = fgetc(flujo);
    while (c != EOF)//imprime todo lo que haya en el archivo
    {
        printf ("%c", c);
        c = fgetc(flujo);
    }



fclose(flujo);
 }
 






void LimpiarTabla(){
FILE * flujo =fopen("Datos.txt","w+");
if(flujo==NULL)
{
   puts("Error en abrir el archivo\n");
         system("pause");
         exit(1);
}
fprintf(flujo,"\0");
banderilla=0;
}



 int main(){
     int band=1;
     char opt;
     do
     {
    printf("1.-Escribir o agregar cadenas\n2.-Ver tabla resultante\n3.-Borrar datos de la tabla\n4.-Salir del programa\n");
    scanf("%i",&opt);
     switch (opt)
     {
     case 1:
            IniciarOperaciones();
            guardarTablaEnArchivo(*arreglo);
            free(arreglo);
            puts("Se ha imprimid la tabla corectamente");
            band=1;
     break;
            band=1;
     case 2:
            ImprimirTablaDesdeArchivo();
            band=1;
     break;


     case 3:
        LimpiarTabla();
        puts("Se ha limpiado la tabla correctamente!\n");
            band=1;
     break;

     case 4:
     
        band = 0;
     break;


     default:
     puts("Introduce una opcion valida\n");
     band=1;
         break;
     }
     
    
     } while (band==1);


puts("Programa terminado\n");
system("pause");
 }
