#include<window.h>


void Marco();
void Linea(int, int);
void GoToXY(int, int);
void Centrar(char *, int);
void Mensaje(char *, int, int);


void Marco(){
	
	int eRen, eCol;
	
	system("color 1E");
	system("cls");
	
	printf("%c", 218);
	
	Linea(2, 208);
	
	printf("%c", 191);
	
	for(eRen = 1; eRen <= 25; eRen++){
		
		GoToXY(eRen, 0);
		
		printf("%c", 179);
		
		GoToXY(eRen, 208);
			   
		printf("%c\n", 179);
	}
	
	printf("\n%c", 192);
	
	for(eCol = 2; eCol <= 208; eCol++){
		
		printf("%c", 196);
		
		printf("%c", 217);
	}
}

void Linea(int eColIni, int eColFin){
	
	int eCol;
	
	for(eCol = eColIni; eCol <= eColFin; eCol++){
		
		printf("%c", 196);
	}
}

void GoToXY(int eRen, int eCol){
	
	COORD coordenada;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	
	coordenada.X = eCol;
	coordenada.Y = eRen;
	
	SetConsoleCursorPosition(salida, coordenada);

}
void Centrar(char *sCadena , int eRenglon){
	
	Mensaje(sCadena, eRenglon, (220 - strlen(sCadena)) / 2);
}
	
void Mensaje(char *sTexto, int eRenglon int eColumna){
	
	GoToXY(eColumna, eRenglon );
	printf(sTexto);
}
