/* ▪* 
 * Ingenieria en IA ▪* 
  ▪*/
 #include<stdio.h>/*   []  \n */
 #include<stdlib.h>//Este programa lee las palabras de un archivo de texto y las ordena
 #include<string.h>
 
 void imp_ar(char *nom);
 void arr_nue();



void main(){
    char nom[20];
    FILE *archivo=fopen(nom,"r");
    if (archivo==NULL)
    {
        perror("Error al abrir el archivo");
    }
    imp_ar(nom);
    



}




void imp_ar(char *nom){
    FILE *Archivo=fopen(nom,"r");
    char c;

 c = fgetc(Archivo);
    while (c != EOF)//imprime todo lo que haya en el archivo
    {
        printf ("%c", c);
        c = fgetc(Archivo);
    }
    fclose(Archivo);
}