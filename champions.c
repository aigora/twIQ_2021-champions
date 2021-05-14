#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numeroAlAzar(int limiteSuperior, int limiteInferior)
{
int valor = rand() % limiteSuperior + limiteInferior; 
return valor;
}
char *obtieneAlAzar(char *arreglo[], int tamanyo)
{

int indice = numeroAlAzar(tamanyo,0); 
char *palabra = arreglo[indice]; 
return palabra;
}
int main (void) {
//Trabajo realizado por David Miragallas, Daniel Mayas y Pablo Cantin.	

	int  alternativa;
	char aux;
	char jugador1;
	char jugador2;
	
void imprimirBanner(){
		printf("Si quiere ver estadisticas generales del grupo pulse 5:\n");
		printf("Si quiere ver los resultados de los equipos en la fase de grupos pulse 6:\n");
		printf("Si quiere ver la clasificacion del grupo pulse 7:\n");
	}
	
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
		printf("Patetico de Madrid pulse 2\n");
		printf("Lokomotiv Moskva pulse 3\n");
		printf("Salzburg pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("            neuer\n");
			printf("Pavard\t"); printf("Sule\t");    printf("Alaba\t");   printf("Davies\n");
			printf("      Kimmich       Goretzka\n");
			printf("Sane         Muller        Coman\n");
			printf("           Lewandowski\n");
					
		}
        	if(equipo==2){
			printf("                         Oblak\n");
			printf("Trippier\t"); printf("Savic\t");    printf("Felipe\t");   printf("Hermoso\n");	
			printf("Llorente    Koke        Saul        Carrasco\n");
			printf("          Correa        Suarez\n");
					
		}
			if(equipo==3){
			printf("                      Guilherme\n");
			printf("Zhivoglyadov\t");    printf("Corluka\t");       printf("Murillo\t");      printf("Rajkovic\n");	
			printf("Lisakovich     Magkeev       Lystsov        Rybus\n");
			printf("           Ze Luis        Eder\n");
				
		}
				if(equipo==4){
			printf("                       Stankovic\n");
			printf("Kristensen\t");    printf("Andre Ramalho\t");       printf("Wober\t");      printf("Ulmer\n");	
			printf("Mwepu    Camara       Junuzovic        Szoboszlai\n");
			printf("             Berisha        Koita\n");
				
		}
	   	break;
	case 'B':
	case 'b':
		printf(" Borussia Monchedgladbach\n Real Madrid\n Inter de Milan\n Shaktar Donetsk\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Real Madrid pulse 5\n");
		printf(" Shaktar Donetsk pulse 6\n");
		printf("Inter de Milan pulse 7\n");
		printf("Borussia Monchedgladbach pulse 8\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==5){
			printf("            Courtois\n");
			printf("Carvajal\t"); printf("Ramos\t");    printf("Varane\t");   printf("Mendy\n");
			printf("      Modric      casemiro      Kroos\n");
			printf(" Asensio        Benzema        Vinicius\n");					
		}
		if(equipo==6){
			printf("                  Trubin\n");
			printf("Dodo\t"); printf("Kryvtsov\t");    printf("Khocholava\t");   printf("Matviyenko\n");
			printf("       Maycon            Stepanenko\n");
			printf("  Tete           Alan Patrick          Solomon\n");
			printf("                    Dentinho\n");					
		}
			if(equipo==7){
			printf("                  Handanovic\n");
			printf("Skriniar\t"); printf("De Vrij\t");    printf("Bastoni\n");  
			printf("  Hakimi      Barella     Brozovic       Gagliardini      Young \n");
			printf("             Lukaku       Lautaro Martinez\n");					
		}
			if(equipo==8){
			printf("             Sommer\n");
			printf("Lainer\t"); printf("Ginter\t");    printf("Elvedi\t");   printf("Wendt\n");
			printf("      Kramer       Neuhaus\n");
			printf("Plea         Stindl        Thuram\n");
			printf("            Embolo\n");
					
		}
		 break;
	case 'C':
	case 'c':
		printf(" Manchester City\n Olympique Marseille\n FC Porto\n Olympiacos\n");
				   		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Manchester City pulse 9\n");
		printf(" Olympique Marseille pulse 10\n");
		printf("FC Porto pulse 11\n");
		printf("Olympiacos pulse 12\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==9){
			printf("                      Ederson\n");
			printf("Walker\t"); printf("Laporte\t");    printf("\tEric Garcia\t");   printf(" Benjamin Mendy\n");
			printf("             Rodri           Gundogan\n");
		    printf("       Mahrez        Bernardo Silva      sterling\n");
			printf("                      Aguero\n");					
		}
		if(equipo==10){
			printf("                   Mandanda\n");
			printf("Sakai\t"); printf("Alvaro\t");    printf("Balerdi\t");   printf("\tNagatomo\n");
			printf("  Sanson          Kamara         Gueye\n");
			printf("    Thauvin        Germain            Payet\n");					
		}
			if(equipo==11){
			printf("                    Diogo Costa\n");
			printf("Nanu\t"); printf("Mbemba\t");    printf("Leite\t");  printf("Sanusi\n");
			printf("  Baro      Grujic      Otavio \n");
			printf("  Joao Mario     Toni Martinez      Felipe Anderson\n");					
		}
			if(equipo==12){
			printf("                  Jose Sa\n");
			printf("Rafinha\t"); printf("\tRuben Semedo\t");    printf("Cisse\t");   printf("Holebas\n");
			printf("         Mvila       Camara       Bouchalakis\n");
			printf("      Vrousai         El-Arabi        Masouras\n");			
		} 
	     break;
	case 'D':
	case 'd':
		printf(" Ajax\n Atalanta\n Liverpool\n Midtjylland\n");
		imprimirBanner();
		break;
	case 'E':
	case 'e':
		printf(" Chelsea FC\n Sevilla FC\n Stade Rennais\n FK Krasnodar\n");
		imprimirBanner();
		break;
	case 'F':
	case 'f':
		printf(" Lazio\n Zenit\n Borussia Dortmund\n Brujas\n");
		imprimirBanner();
		break;
	case 'G':
	case 'g':
		printf(" FC Barcelona\n Juventus\n Dinamo Kiev\n Ferencvarosi\n");
		imprimirBanner();
		break;
	case 'H':
	case 'h':
		printf(" PSG\n Manchester United\n RB Leipzig\n Istanbul Basaksehir");
		imprimirBanner();
		break;
	 default:
	     printf("No ha escogido una opciÃ³n correcta:\n");
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
	
	do{
		
	
	printf("S) Simulacion de juego\n");
	printf("P) Prediccion de ganador\n");
	fflush(stdin);
	scanf("%c",&el);
	fflush(stdin);
	switch (el){
	case 'S':
	case 's':	
	printf("Jugador 1 elija un equipo: PSG(1), Bayern Munchen(2), Manchester City(3), Real Madrid(4), Atletico de Madrid(5) \n");
	scanf("%c",&jugador1);
	printf("Jugador 2 elija su equipo: PSG(1), Bayern Munchen(2), Manchester City(3), Real Madrid(4), Atletico de Madrid(5)\n");
	fflush(stdin);
	scanf("%c",&jugador2);
	((jugador1=='1' && jugador2=='1')||(jugador1=='2'&& jugador2=='2')||(jugador1=='3'&& jugador2=='3'));
	if((jugador1=='1'&& jugador2=='2')||(jugador1=='2'&& jugador2=='1')){
		srand(time(NULL));
char *palabras[] = { "PSG" ,"Bayern Munchen"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("el ganador es el: %s\n", palabra); 
	} else if((jugador1=='1' && jugador2=='3')||(jugador1=='3'&& jugador2=='1')){
		srand(time(NULL));
char *palabras[] = {"PSG", "Manchester City"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("el ganador es el: %s\n", palabra); 
	} else if ((jugador1=='2' && jugador2=='3')||(jugador1=='3'&& jugador2=='2')) {
		srand(time(NULL));
char *palabras[] = { "Bayern Munchen" , "Manchester City"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("el ganador es el: %s\n", palabra); 
    } else if((jugador1=='1' && jugador2=='4')||(jugador1=='4'&& jugador2=='1')){
		srand(time(NULL));
char *palabras[] = {"PSG", "Real Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("el ganador es el: %s\n", palabra); 
	} else if((jugador1=='1' && jugador2=='5')||(jugador1=='5'&& jugador2=='1')){
		srand(time(NULL));
char *palabras[] = {"PSG", "Atletico de Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("el ganador es el: %s\n", palabra); 
	} else if((jugador1=='2' && jugador2=='4')||(jugador1=='4'&& jugador2=='2')){
		srand(time(NULL));
char *palabras[] = {"Bayern Munchen", "Real Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("El ganador es el: %s\n", palabra); 
	} else if((jugador1=='2' && jugador2=='5')||(jugador1=='5'&& jugador2=='2')){
		srand(time(NULL));
char *palabras[] = {"Bayern Munchen", "Atletico de Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("El ganador es el: %s\n", palabra); 
	} else if((jugador1=='3' && jugador2=='4')||(jugador1=='4'&& jugador2=='3')){
		srand(time(NULL));
char *palabras[] = {"Manchester city", "Real Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("El ganador es el: %s\n", palabra); 
	} else if((jugador1=='3' && jugador2=='5')||(jugador1=='5'&& jugador2=='3')){
		srand(time(NULL));
char *palabras[] = {"Manchester City", "Atletico de MAdrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("El ganador es el: %s\n", palabra); 
	} else if((jugador1=='5' && jugador2=='4')||(jugador1=='4'&& jugador2=='5')){
		srand(time(NULL));
char *palabras[] = {"Atletico de Madrid", "Real Madrid"}; 
int tamanyo = sizeof(palabras) / sizeof(char *); 
char *palabra = obtieneAlAzar(palabras, tamanyo); 
printf("El ganador es el: %s\n", palabra); 
	} 
	else if ((jugador1=='1' && jugador2=='1')||(jugador1=='2'&& jugador2=='2')||(jugador1=='3'&& jugador2=='3')||(jugador1=='4'&& jugador2=='5')||(jugador1=='5'&& jugador2=='5')){
	printf("Habeis quedado empate\n");
	}
	 	break;
	case 'P':
	case 'p':
		printf("Aqui te llevara a una prediccion a realizar por el jugador, a partir de los equipos clasificados en los octavos de final\n");
	 	break;
	 	default:printf ("Ha introducido un valor incorrecto\n");
		}
		printf("¿Quiere volver a jugar?\n");
		printf(" Pulse 1 en caso afirmativo; Pulse 2 si no quieres volver a jugar\n");
		fflush(stdin);
		scanf("%d", &opcion);
	}
	while(opcion==1);
}
	
	printf(" Si quiere volver al menu principal pulse 1:\n En cambio, si quiere salir pulse 2:\n");
	scanf("%d", &alternativa);

	
}


while(alternativa==1);

 	
printf("Fin del programa.\n");
	
return 0;


}
