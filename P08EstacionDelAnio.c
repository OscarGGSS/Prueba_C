/* ******
* Programa: P08EstacionDelAnio.c
* Autor: Zuri G
* Fecha: 20/03/2025
* Objetivo: Indentificar la estación del año que corresponda a una fecha y hemisferio
* Versión: 1.0
* Compilador: Dev-C++ 5.11
****** */

//Bibliotecas
#include <stdio.h>
#include <string.h>

//Programa principal
int main (){
	
	//Declaración de variables
	int eMes, eDia;
	char sHemisferio [5];
	
	//Entrada
	printf("Programa que indica la estaci%cn del a%co que corresponde a una fecha y hemisferio.\n\n", 162, 164);
	
	printf("Ingrese el mes [1-12]: ");
	scanf("%d", &eMes);
	
	printf("Ingrese el d%ca [1-31]: ", 161);
	scanf("%d", &eDia);
	
	printf("Ingrese el Hemisferio [NORTE/SUR]: ");
	scanf("%s", &sHemisferio);
	
	//Proceso
	if (eMes < 1 || eMes > 12){
		
		printf("\nError. El mes debe estar entre 1 y 12");
		
	} else if (eDia < 1 || eDia > 31){
		
		printf("\nError. El d%ca debe estar entre 1 y 31", 161);
		
	} else if (strcmp(sHemisferio, "NORTE") != 0 && (strcmp(sHemisferio, "SUR") !=0){
		
		printf("\nError. El Hemisferio debe ser NORTE O SUR");
	
	} else if (strcmp (sHemisferio, "Norte") == 0){
		
		if((eMes == 3&& eDia >= 21) || eMes > 3 && eMes <= 5)
	}
}
