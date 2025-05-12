/* ********
   
   Programa: P04Fecha.c
   Autor: Oscar Gonzalez Saucedo
   Fecha: 06/03/2025
   Objetivo: Proograma Algoritmo que dada una fecha en formato DDMMAA obtener el día, mes y año correspondiente en tres variables y mostrarlas
   Compilador: Dev-C++ 5.11
   
******** */

//Bibliotecas
#include <stdio.h>

//Programa pricipal

int main (){

    //Variables
    int eDia, eMes, eAnio;
    long int eFecha;
    
    //Entrada
    printf ("Programa que dada una fecha en formato DDMMAA obtiene el día, mes y a%co correspondiente en tres variables y las muestra. \n\n", 164);
    
    printf ("Ingrese la fecha en formato DDMMAA; ");
    scanf ("%d", &eFecha);
    
    //Proceso
    eDia= eFecha / 10000;
    eMes = (eFecha % 10000) / 100;
    eAnio = eFecha % 100;
    
    //Salida
    printf("La fecha es: %d/%d/%d", eDia, eMes, eAnio);
    
    getchar ();
    
    return 0;
}
