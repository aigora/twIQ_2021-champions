#include <stdio.h>
#include <stdlib.h>
int main () {
//Trabajo realizado por David Miragallas, Daniel Mayas y Pablo Cantin.	

	int  alternativa;
	char aux;
	
do{
 	

	
	char letra,op,el;
	int eleccion,opcion,equipo;
	printf("\t \t BIENVENIDO AL CONSULTORIO DE INFORMACION DE LA LIGA DE CAMPEONES\n");


	
	printf("\n---->Seleccione una de estas opciones: \n");
 	
 	printf(" Informacion sobre la Champions pulse 1\n");
 	printf(" Minijuegos pulse 2\n"); 
	scanf("%d",&eleccion);
	fflush(stdin);
	 
	if (eleccion==1){
		 
printf("||      Grupo A        ||        Grupo B            ||      Grupo C        ||       Grupo D       ||\n");
printf("----------------------------------------------------------------------------------------------------\n");
printf("||   Bayern Munchen    ||      Real Madrid          ||      FC Porto       ||      Liverpool      ||\n"); 
printf("|| Atletico de Madrid  ||     Shaktar Donetsk       ||   Manchester City   ||        Ajax         ||\n");   
printf("||     Salzburgo       ||     Inter de Milan        || Olympique Marseille ||       Atalanta      ||\n");
printf("||  Lokomotiv Movska   || Borussia Monchedgladbach  ||     Olympiacos      ||     Midtjylland     ||\n");
printf("||---------------------||---------------------------||---------------------||---------------------||\n");
printf("||---------------------||---------------------------||---------------------||---------------------||\n");
printf("||     Grupo E         ||          Grupo F          ||        Grupo G      ||       Grupo H       ||\n");
printf("----------------------------------------------------------------------------------------------------\n");
printf("||    Chelsea FC       ||      Borussia Dortmund    ||     FC Barcelona    ||         PSG         ||\n");
printf("||    Sevilla FC       ||           Lazio           ||       Juventus      ||   Manchester United ||\n");
printf("||    Stade Rennais    ||           Zenit           ||      Dinamo Kiev    ||       Leipzig       ||\n");
printf("||   FK Krasnodar      ||          Brujas           ||     Ferencvarosi    || Istanbul Basaksehir ||\n");
printf("||---------------------||---------------------------||---------------------||---------------------||\n");
printf("||---------------------||---------------------------||---------------------||---------------------||\n");

printf("Elija una opcion\n");
printf("Elige grupo pulse 1\n");
printf("Estadistica pulse 2\n");
scanf("%d",&opcion);
fflush(stdin);

if (opcion==1){
	printf("Elija grupo\n");
	scanf("%c",&op);
	fflush(stdin);

switch (op){
	case 'A':
	case 'a':
		printf(" Bayern Munich\n Atletico de Madrid\n Lokomotiv Moskva\n Salzburg\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Bayern Munich pulse 1\n");
		printf("Atletico de Madrid pulse 2\n");
		printf("Lokomotiv Moskva pulse 3\n");
		printf("Salzburg pulse 4\n");
		printf("Si quiere ver estadisticas generales del grupo pulse 5:\n");
		printf("Si quiere ver los resultados de los equipos en la fase de grupos pulse 6:\n");
		printf("Si quiere ver la clasificacion del grupo pulse 7:\n");
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("            neuer\n");
			printf("Pavard\t"); printf("Sule\t");    printf("Alaba\t");   printf("Davies\n");
			printf("      Kimmich       Goretzka\n");
			printf("Sane         Muller        Coman\n");
			printf("           Lewandowski\n");
					
		}

	   	break;
	case 'B':
	case 'b':
		printf(" Borussia Monchedgladbach\n Real Madrid\n Inter de Milan\n Shaktar Donetsk\n");
		 break;
	case 'C':
	case 'c':
		printf(" Manchester City\n Olympique Marseille\n FC Porto\n Olympiacos\n");
	     break;
	case 'D':
	case 'd':
		printf(" Ajax\n Atalanta\n Liverpool\n Midtjylland\n");
		break;
	case 'E':
	case 'e':
		printf(" Chelsea FC\n Sevilla FC\n Stade Rennais\n FK Krasnodar\n");
		break;
	case 'F':
	case 'f':
		printf(" Lazio\n Zenit\n Borussia Dortmund\n Brujas\n");
		break;
	case 'G':
	case 'g':
		printf(" FC Barcelona\n Juventus\n Dinamo Kiev\n Ferencvarosi\n");
		break;
	case 'H':
	case 'h':
		printf(" PSG\n Manchester United\n RB Leipzig\n Istanbul Basaksehir");
		break;
	 default:
	     printf("No ha escogido una opción correcta:\n");
	      scanf("%c",&op);	
	      
}


}else if(opcion==2){
	
 	FILE * f = fopen("Estadistica.txt","r");	
		if(f == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f);
		printf("%c",aux);
}
	printf("\n");
		fclose(f);
		
		
}
	
}else if(eleccion==2){
	printf("S) Simulacion de juego\n");
	printf("P) Prediccion de ganador\n");
	scanf("%c",&el);
	fflush(stdin);
	switch (el){
	case 'S':
	case 's':	
		printf("Aqui te llevaria a la eleccion de 5 equipos de la Champions \n");
		printf("Despues, cada jugador elegira uno de esos equipos, y ya empezaria el juego.\n");
	 	break;
	case 'P':
	case 'p':
		printf("Aqui te llevara a una prediccion a realizar por el jugador, a partir de los equipos clasificados en los octavos de final\n");
	 	break;
	 	default:printf ("Ha introducido un valor incorrecto\n");
		}
	}
	
	printf(" Si quiere volver al menu principal pulse 1:\n En cambio, si quiere salir pulse 2:\n");
	scanf("%d", &alternativa);

	
}


while(alternativa==1);

 	
printf("Fin del programa.\n");
	
return 0;


}
