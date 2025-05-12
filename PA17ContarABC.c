/*********************
	Programa: PA17ContarABC.c
	Fecha: 08/05/2025
	Autor: Oscar Gonzalez Saucedo
	Objetivo: Programa que cuenta el numero de veces que se repiten las letras a,b y c
	Compilador: Dev-C++ 5.11
	Version: 1.0
	
**********************/

//Bibliotecas

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "interfaz.h"

//Constantes
#define MAX 3

//Tipos

typedef int TaABC[MAX];
typedef char TsCaena[50];

//Programa principal

int main(){
	
	//Variables
	
	int eContador;
	TaABC aCuenta = {0};
	TsCadena sCadena;
	
	//Entrada
	
	Marco();
	Centrar("Programa que cuenta el numero de veces que se repiten las letras a,b y c", 4);
	
	Mensaje("Ingrese la cadena a contar: ", 7, 5 );
	
	GoToXY(5, 35);
	
	gets(sCadena);
	
	//Proceso
	
	
	for(eContador = 0; eContador < strlen(sCadena); eContador++ ){
		
		if(toupper(sCadena[eContador]) == 'A' || toupper(sCadena[eContador]) == 'B' || toupper(sCadena[eContador]) == 'C' ) ){
			
			aCuenta[(tolower(sCadena)[eContador])) - 'a'] += 1;
			
			
			
		}
	}
	
	//Salida
	
	for(eContador = 0; eContador < MAX; eContador++){
		
		printf("%c = %d \n", eContador + 97, aCuenta[eContador]);
	}

	getchar();
	return 0;
}
