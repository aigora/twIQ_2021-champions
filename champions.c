#include <stdio.h>
int main () {
	char letra;
	
	printf("\t \t BIENVENIDO AL CONSULTORIO DE INFORMACION DE LA LIGA DE CAMPEONES");


	printf("\n \t Seleccione una de estas opciones: \n");
 
	printf("a) Consultar los grupos");
	printf("\nb) Simulacion de juego");
	printf("\nc) Prediccion de ganador");
	printf("\nd) Salir del programa\n");
	 
	scanf("%c",&letra);
	fflush(stdin);
	 

	 
	 switch (letra){
	 	case 'a':
	 	case 'A':
		 printf("Aqui se programaria la consulta de grupos.\n");
		 printf("Una vez te salgan los grupos, habra otras opciones a elegir, como estadisticas generales de la competicion o incluso particulares, basandose en un equipo o jugador en concreto. ");
	 	break;
	 	case 'b':
		case 'B':	
		 printf("Aqui te llevaria a la eleccion de 5 equipos de la Champions \n");
		 printf("Despues, cada jugador elegira uno de esos equipos, y ya empezaria el juego.");
	 	break;
	 	case 'c':
		case 'C':
		 printf("Aqui te llevara a una prediccion a realizar por el jugador, a partir de los equipos clasificados en los octavos de final.");
	 	break;
	 	case 'd':
		case 'D':
		 printf("En esta opcion el programa finalizaria.");
		 printf("\nVUELVE PRONTO!!!");
		break;
	 	default:printf ("Ha introducido un valor incorrecto\n");
		}
	
		
	
	return 0;
}
