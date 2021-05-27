//Declaracion de las librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//variables para los nombres de los respectivos equipos
	char equipo1[25]; 
	char equipo2[25];
	char equipo3[25];
	char equipo4[25];	
	char equipo5[25];
	char equipo6[25];
	char equipo7[25];
	char equipo8[25];
	char equipo9[25];
	char equipo10[25];
	char equipo11[25];
	char equipo12[25];
	char equipo13[25];
	char equipo14[25];
	char equipo15[25];
	char equipo16[25];
	
	
//variables para los nombres de los respectivos jugadores	
	char jugadores1[50]; 
	char jugadores2[50];
	char jugadores3[50];
	char jugadores4[50];	
	char jugadores5[50];
	char jugadores6[50];
	char jugadores7[50];
	char jugadores8[50];
	char jugadores9[50];
	char jugadores10[50];
	char jugadores11[50];
	
//Declaracion de la funcion 
void imprimirBanner(){
		printf("Si quiere ver estadisticas generales del grupo pulse 5:\n");
		printf("Si quiere ver los resultados de los equipos en la fase de grupos y la clasificacion del grupo pulse 6:\n");
}

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

//Declaracion de las estructuras	
typedef struct {
	char nombre[100];
	int partidos;
	int goles;
	int asistencias;
	char jugadores[100];
} jugador;

typedef struct{
	char nombre[25];
} equipos;

int main (void) {
//Trabajo realizado por David Miragallas, Daniel Mayas y Pablo Cantin.	

	int  alternativa;
	char aux,aux2,aux3,aux4;
	char jugador1;
	char jugador2;
	int eleccion;
	equipos vector[25];
	
	//Declaracion de estructuras
typedef struct{
	char nombre[25];
} equipos;

typedef struct{
	char nombre[25];
} jugadores;
		
do{
 	

	//Declaracion de variables
	char letra,op,el;
	int eleccion,opcion,jugadores;
	int i, j, equipo, cont=0;
	printf("\t \t BIENVENIDO AL CONSULTORIO DE INFORMACION DE LA LIGA DE CAMPEONES\n");


	//Menu de opciones
	printf("\n---->Seleccione una de estas opciones: \n");
 	
 	printf("Si quiere consultar la informacion de la champions pulse la tecla 1\n");
 	printf("Si quiere probar alguno de nuestros juegos pulse la tecla 2\n"); 
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

printf("Elija una opcion:\n");
printf("Si quiere elegir grupo pulse 1\n");
printf("Si quiere ver las estadisticas globales de la Champions pulse 2\n");
scanf("%d",&opcion);
fflush(stdin);

if (opcion==1){
	printf("Elija grupo\n");
	scanf("%c",&op);
	fflush(stdin);
	
//Iniciacion del programa segun la opcion elegida
switch (op){
	case 'A':
	case 'a':

		system("cls"); //Borra todo lo anterior en el compilador
				
		printf("Has elegido el Grupo A, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ //Muestra los equipos del Grupo A
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf("\n Bayern Munich\n Atletico de Madrid\n Lokomotiv Moskva\n Salzburg\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija opcion:\n");
		printf("Alineacion Bayern Munich pulse 1\n");
		printf("Alineacion Atletico de Madrid pulse 2\n");
		printf("Alineacion Lokomotiv Moskva pulse 3\n");
		printf("Alineacion Salzburg pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		
		//Se mostrara el contenido dependiendo de la opcion elegida
		if(equipo==1){
			printf("            Neuer\n");
			printf("Pavard\t"); printf("Sule\t");    printf("Alaba\t");   printf("Davies\n");
			printf("      Kimmich       Goretzka\n");
			printf("Sane         Muller        Coman\n");
			printf("           Lewandowski\n");
			printf("\n");
					
		}
        	else if(equipo==2){
			printf("                         Oblak\n");
			printf("Trippier\t"); printf("Savic\t");    printf("Felipe\t");   printf("Hermoso\n");	
			printf("Llorente    Koke        Saul        Carrasco\n");
			printf("          Correa        Suarez\n");
					
		}
			else if(equipo==3){
			printf("                      Guilherme\n");
			printf("Zhivoglyadov\t");    printf("Corluka\t");       printf("Murillo\t");      printf("Rajkovic\n");	
			printf("Lisakovich     Magkeev       Lystsov        Rybus\n");
			printf("           Ze Luis        Eder\n");
				
		}
			else if(equipo==4){
			printf("                       Stankovic\n");
			printf("Kristensen\t");    printf("Andre Ramalho\t");       printf("Wober\t");      printf("Ulmer\n");	
			printf("Mwepu    Camara       Junuzovic        Szoboszlai\n");
			printf("             Berisha        Koita\n");
			printf("\n");
				
		}
			else if(equipo==5){
			
			jugador stats[100];

		FILE *f1 = fopen("Estadisticas_GrupoA.txt", "r"); //Abre el fichero
	
	if(f1 == NULL){ //Habra un error si no encuentra el fichero
		printf("ERROR");
	}
	
	//Guardalas variables segun lo que ponga en el fichero
	while(fscanf(f1, "%[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{ 
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls"); //Borra todo lo anterior
	printf("Estos son los jugadores:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){ //Imprime por pantalla los jugadores 
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { //Pregunta por uno de los jugadores
		printf("\n\nElige el numero del jugador correspondiente para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion;
	//Imprime estadisticas del jugador
	printf("\nNombre: %s  \nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);
	
	//Cierra el fichero 
	fclose(f1);
	printf("\n");
			}
			else if(equipo==6){
		//Se abre el fichero
		FILE * f17 = fopen("GrupoA.txt","r");	
		if(f17 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f17);
		printf("%c",aux);
}
	printf("\n");
		fclose(f17);	
			}
			//En este caso sera lo mismo que en el apartado A
	   	break;
	case 'B':
	case 'b':
		
			system("cls");
				
		printf("Has elegido el Grupo B, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ 
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf("Borussia Monchedgladbach\n Real Madrid\n Inter de Milan\n Shaktar Donetsk\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Real Madrid pulse 1\n");
		printf(" Shaktar Donetsk pulse 2\n");
		printf("Inter de Milan pulse 3\n");
		printf("Borussia Monchedgladbach pulse 4\n");
		printf("\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("            Courtois\n");
			printf("Carvajal\t"); printf("Ramos\t");    printf("Varane\t");   printf("Mendy\n");
			printf("      Modric      casemiro      Kroos\n");
			printf(" Asensio        Benzema        Hazard\n");					
		}
		if(equipo==2){
			printf("                  Trubin\n");
			printf("Dodo\t"); printf("Kryvtsov\t");    printf("Khocholava\t");   printf("Matviyenko\n");
			printf("       Maycon            Stepanenko\n");
			printf("  Tete           Alan Patrick          Solomon\n");
			printf("                    Dentinho\n");					
		}
			if(equipo==3){
			printf("                  Handanovic\n");
			printf("Skriniar\t"); printf("De Vrij\t");    printf("Bastoni\n");  
			printf("  Hakimi      Barella     Brozovic       Gagliardini      Young \n");
			printf("             Lukaku       Lautaro Martinez\n");					
		}
			if(equipo==4){
			printf("             Sommer\n");
			printf("Lainer\t"); printf("Ginter\t");    printf("Elvedi\t");   printf("Wendt\n");
			printf("      Kramer       Neuhaus\n");
			printf("Plea         Stindl        Thuram\n");
			printf("            Embolo\n");
					
		}
			else if(equipo==5){
				
				jugador stats[100];

				FILE *f2 = fopen("Estadisticas_GrupoB.txt", "r");
	
	if(f2 == NULL){ 
		printf("ERROR");
	}
	

	while(fscanf(f2, "%[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{ 
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls");
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){ 
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion;

	printf("\nNombre: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f2);
	printf("\n");
			}
			else if(equipo==6){
				
			FILE * f18 = fopen("GrupoB.txt","r");	
		if(f18 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f18);
		printf("%c",aux);
}
	printf("\n");
		fclose(f18);
				
			}
		//En este caso sera lo mismo que en el apartado A
		 break;
	case 'C':
	case 'c':
		
			system("cls"); 
				
		printf("Has elegido el Grupo C, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ 
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf("Manchester City\n Olympique Marseille\n FC Porto\n Olympiacos\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Manchester City pulse 1\n");
		printf("Olympique Marseille pulse 2\n");
		printf("FC Porto pulse 3\n");
		printf("Olympiacos pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                      Ederson\n");
			printf("Walker\t"); printf("Laporte\t");    printf("\tEric Garcia\t");   printf(" Benjamin Mendy\n");
			printf("             Rodri           Gundogan\n");
		    printf("       Mahrez        Bernardo Silva      sterling\n");
			printf("                      Aguero\n");					
		}
		if(equipo==2){
			printf("                   Mandanda\n");
			printf("Sakai\t"); printf("Alvaro\t");    printf("Balerdi\t");   printf("\tNagatomo\n");
			printf("  Sanson          Kamara         Gueye\n");
			printf("    Thauvin        Germain            Payet\n");					
		}
			if(equipo==3){
			printf("                    Diogo Costa\n");
			printf("Nanu\t"); printf("Mbemba\t");    printf("Leite\t");  printf("Sanusi\n");
			printf("  Baro      Grujic      Otavio \n");
			printf("  Joao Mario     Toni Martinez      Felipe Anderson\n");					
		}
			if(equipo==4){
			printf("                  Jose Sa\n");
			printf("Rafinha\t"); printf("\tRuben Semedo\t");    printf("Cisse\t");   printf("Holebas\n");
			printf("         Mvila       Camara       Bouchalakis\n");
			printf("      Vrousai         El-Arabi        Masouras\n");			
		} 
			else if(equipo==5){
				jugador stats[100];

				FILE *f3 = fopen("Estadisticas_GrupoC.txt", "r");
	
	if(f3 == NULL){
		printf("ERROR");
	}
	
	
	while(fscanf(f3, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{  
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls");
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls"); 
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion;

	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f3);
			}
			else if(equipo==6){
				
			FILE * f19 = fopen("GrupoC.txt","r");	
		if(f19 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f19);
		printf("%c",aux);
}
	printf("\n");
		fclose(f19);
			}
		//En este caso sera lo mismo que en el apartado A
	     break;
	case 'D':
	case 'd':
		
			system("cls"); 
				
		printf("Has elegido el Grupo D, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ 
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf("Ajax\n Atalanta\n Liverpool\n Midtjylland\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Ajax pulse 1\n");
		printf("Atalanta pulse 2\n");
		printf("Liverpool pulse 3\n");
		printf("Midtjylland pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                      Onana\n");
			printf("Mazraoui\t"); printf("Schuurs\t");    printf("\tBlind\t");   printf("Tagliafico\n");
			printf("      Klaassen          Labyad           Gravenberch\n");
		    printf("         Neres        Traore      Tadic\n");					
		}
		if(equipo==2){
			printf("                   Sportiello\n");
		    printf("Djimsiti\t");    printf("Romero\t");   printf("\tPalomino\n");
			printf("          Pessina         Freuler\n");
			printf("    Hateboer       ilicic            Gosens\n");
			printf("          Muriel         Zapata\n");						
		}
			if(equipo==3){
			printf("                    Alisson\n");
		    printf("\tArnold\t"); printf("Matip\t");    printf("Joe Gomez\t");  printf("Robertson\n");
			printf("   Thiago Alcantara      Wijnaldum      Fabinho \n");
		  	printf("        Salah     Firmino      Mane\n");					
		}
			if(equipo==4){
			printf("                  Hansen\n");
			printf("Cools\t"); printf("\tSviatchenko\t");    printf("Scholz\t");   printf("Paulinho\n");
			printf("           Cajuste      Onyeka\n");
			printf("     Dreyer         Evander        Mabil\n");
			printf("                   Sory  \n");			
		} 
			else if(equipo==5){
							jugador stats[100];

				FILE *f4 = fopen("Estadisticas_GrupoD.txt", "r");
	
	if(f4 == NULL){ 
		printf("ERROR");
	}
	
	
	while(fscanf(f4, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{ 
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls"); 
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){ 
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do {
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion;

	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f4);
			}
			else if(equipo==6){
			
		FILE * f20 = fopen("GrupoD.txt","r");	
		if(f20 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f20);
		printf("%c",aux);
}
	printf("\n");
		fclose(f20);		
			}
		//En este caso sera lo mismo que en el apartado A
		break;
	case 'E':
	case 'e':
		
			system("cls"); 
				
		printf("Has elegido el Grupo E, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf("Chelsea FC\n Sevilla FC\n Stade Rennais\n FK Krasnodar\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Chelsea pulse 1\n");
		printf("Sevilla pulse 2\n");
		printf("Stade Rennais pulse 3\n");
		printf("Krasnodar pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                Mendy\n");
			printf("Azpilicueta\t"); printf("Thiago Silva\t");    printf("Zouma\t");   printf("Chilwell\n");
			printf("      Kante       Jorginho\n");
			printf("Mount         Havertz        Ziyech\n");
			printf("              Werner\n");
					
		}
        	if(equipo==2){
			printf("                     Bono\n");
			printf("Navas\t"); printf("Kounde\t");    printf("Diego Carlos\t");   printf("Escudero\n");	
			printf("       Rakitic       Fernando        Jordan\n");
			printf("       Ocampos      En-Nesyri        Suso\n");
					
		}
			if(equipo==3){
			printf("                          Gomis\n");
			printf("Traore\t");    printf("Da Silva\t");       printf("Aguerd\t");      printf("\tDalbert Henrique\n");	
			printf("          Bourigeaud       N`zonzi        Camavinga\n");
			printf("       Del Castillo         Guirassy        Terrier\n");
				
		}
			if(equipo==4){
			printf("                          Safonov\n");
			printf("Petrov\t");    printf("\tKaio Pantaleao\t");       printf("\tSorokin\t");      printf("\tChernov\n");	
			printf("        Olsson       Vilhena        Utkin\n");
			printf("       Smolnikov         Berg        Ramirez\n");
				
		}
			else if(equipo==5){
		jugador stats[100];

	FILE *f5 = fopen("Estadisticas_GrupoE.txt", "r");
	
	if(f5 == NULL){
		printf("ERROR");
	}
	

	while(fscanf(f5, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{ 
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls");
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion; 

	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f5);
			}
			else if(equipo==6){
				
		FILE * f21 = fopen("GrupoE.txt","r");	
		if(f21 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f21);
		printf("%c",aux);
}
	printf("\n");
		fclose(f21);		
			}
		//En este caso sera lo mismo que en el apartado A	
		break;
	case 'F':
	case 'f':
		
		system("cls");
				
		printf("Has elegido el Grupo F, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf(" Lazio\n Zenit\n Borussia Dortmund\n Brujas\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Lazio pulse 1\n");
		printf("Zenit pulse 2\n");
		printf("Borussia Dortmund pulse 3\n");
		printf("Brujas pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                           Strakosha\n");
		    printf("\tPatric\t");    printf("\tLuiz Felipe\t");   printf("\tAcerbi\n");
			printf("Marusic    Milinkovic-Savic      Lucas Leiva        Luis Alberto       Fares\n");
			printf("                       Correa      Inmobile\n");
		}
        	if(equipo==2){
			printf("                       Kerzhakov\n");
			printf("Karavaev\t"); printf("Lovren\t");    printf("Rakitsky\t");   printf("Krugovoi\n");	
			printf("Kuzyaev      Ozdoev        Barrios        Driussi\n");
			printf("            Dzyuba        Azmoun\n");
					
		}
			if(equipo==3){
			printf("                      Hitz\n");
		    printf("\tPiszczek\t");       printf("\tHummels\t");      printf("\tAkanji\n");
			printf("            Witsel        Bellingham\n");	
			printf("  Meunier     Sancho       Reus        Guerreiro\n");
			printf("                     Haaland\n");
				
		}
				if(equipo==4){
			printf("                       Mignolet\n");
		    printf("Clinton Mata\t");       printf("\tKossounou\t");      printf("\tDeli\n");	
			printf("   Diatta    Vormer       Rits      Vanaken      Sobol\n");
			printf("             De Ketelaere        Dennis\n");
				
		}
		else if(equipo==5){
	
				jugador stats[100];

				FILE *f6 = fopen("Estadisticas_GrupoF.txt", "r");
	
	if(f6 == NULL){ 
		printf("ERROR");
	}
	while(fscanf(f6, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre,  &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls"); 
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){ 
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do { 
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion; 
	
	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f6);
		}
		else if(equipo==6){
				
		FILE * f22 = fopen("GrupoF.txt","r");	
		if(f22 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f22);
		printf("%c",aux);
}
	printf("\n");
		fclose(f22);		
			}
		//En este caso sera lo mismo que en el apartado A
		break;
	case 'G':
	case 'g':
		
		system("cls");
				
		printf("Has elegido el Grupo G, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ 
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf(" FC Barcelona\n Juventus\n Dinamo Kiev\n Ferencvarosi\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("Barcelona pulse 1\n");
		printf("Juventus pulse 2\n");
		printf("Dinamo Kiev pulse 3\n");
		printf("Ferencvarosi pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                   Ter Stegen\n");
			printf("Dest\t"); printf("\tPique\t");    printf("\tLenglet\t");   printf("\tJordi Alba\n");
			printf("            Busquets       De Jong\n");
			printf("    Griezmann         Pedri        Dembele\n");
			printf("                  Messi\n");				  
		}
        	if(equipo==2){
			printf("                       Szczesny\n");
		    printf("\tDe Ligt\t");    printf("\tBonucci\t");   printf("\tDanilo\n");
			printf("             Ramsey        Mckennie\n");	
			printf("     Cuadrado        Arthur        Alex Sandro\n");
			printf("            Ronaldo        Morata\n");
					
		}
			if(equipo==3){
			printf("                           Boyko\n");
			printf("Kedziora\t");    printf("Zabarnyi\t");       printf("Popov\t");      printf("Karavaev\n");	
			printf("          Buyalsky       Sydorchuk        Sharparenko\n");
			printf("        Tsygankov     Supriaha        De Pena\n");		
		}
			if(equipo==4){
			printf("                         Dibusz\n");
			printf("Lovrencsics\t");    printf("Blazic\t");       printf("Kovacevic\t");      printf("Heister\n");	
			printf("                   Somalia        Kharatin\n");
			printf("           Zubkov          Siger        Nguen\n");
			printf("                          Isael\n");	
		}
			else if(equipo==5){
				
				jugador stats[100];

				FILE *f7 = fopen("Estadisticas_GrupoG.txt", "r");
	
	if(f7 == NULL){ 
		printf("ERROR");
	}
	
	while(fscanf(f7, "%[^;]; %[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre,  &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls");
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){ 
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do {
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion; 

	printf("\nNombre: %s\nPosicion: %s\nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f7);
			}
			else if(equipo==6){
				
		FILE * f23 = fopen("GrupoG.txt","r");	
		if(f23 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f23);
		printf("%c",aux);
}
	printf("\n");
		fclose(f23);	
			}
		//En este caso sera lo mismo que en el apartado A
		break;
	case 'H':
	case 'h':
		
		system("cls");
				
		printf("Has elegido el Grupo H, estos son los equipos que componen el Grupo:\n\n");
		for(i=0; i<cont; i++){ 
			printf("%d. %s", i+1, vector[i].nombre);
			}
		printf(" PSG\n Manchester United\n RB Leipzig\n Istanbul Basaksehir");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Elija equipo:\n");
		printf("PSG pulse 1\n");
		printf("Manchester United pulse 2\n");
		printf("RB Leipzig pulse 3\n");
		printf("Istanbul Basaksehir pulse 4\n");
		imprimirBanner();
		scanf("%d",&equipo);
		fflush(stdin);
		if(equipo==1){
			printf("                    Keylor Navas\n");
			printf("Florenzi\t"); printf("Marquinhos\t");    printf("Kimpembe\t");   printf("Kurzawa\n");
			printf("          Herrera      verrati         Gueye\n");
			printf("           Di Maria      Mbappe      Neymar\n");
					
		}
        	if(equipo==2){
			printf("                        De Gea\n");
			printf("\tMaguire\t");    printf("\tLindelof\t");   printf("Tuanzebe\n");	
			printf("                Pogba       Fred\n");
			printf("     Telles    Bruno Fernandes      Wan-Bissaka\n");
			printf("           Rashford       Martial\n");
					
		}
			if(equipo==3){
			printf("                      Gulacsi\n");
		    printf("\tHalstenberg\t");       printf("\tUpamecano\t");      printf("Konate\n");
			printf("                   Nkunku        Kampl\n");	
			printf("    Angelino     Forsberg       Dani Olmo        Henrichs\n");
			printf("                       Poulsen\n");
				
		}
			if(equipo==4){
			printf("                                 Gunok\n");
			printf("\tBolingoli\t");    printf("Epureanu\t");       printf("Skrtel\t");      printf("\tJunior Caicara\n");	
			printf("            Turuc    mKahveci     Topal    Rafael    Visca\n");
			printf("                            Crivelli\n");
				
		}
			else if(equipo==5){
			
			jugador stats[100];

		FILE *f8 = fopen("Estadisticas_GrupoH.txt", "r");
	
	if(f8 == NULL){ 
		printf("ERROR");
	}
	
	while(fscanf(f8, "%[^;]; %d; %d; %d; %[^\n] \n", stats[i].nombre, &stats[i].partidos, &stats[i].goles, &stats[i].asistencias, stats[i].jugadores) != EOF){
		i++;
	}
		do{ 
    	printf("\n\nPulse 1 para ver los jugadores a los que puedes ver las stats: ");
    	scanf("%d", &jugadores);
	} while (jugadores<1 || jugadores>2);
	
	system("cls");
	printf("Estos son los jugadores del equipo elegido:\n");
	for(i=jugadores*12-12; i<jugadores*12; i++){
		printf("\n%d. %s", cont+=1, stats[i].nombre);
	}
	
	do {
		printf("\n\nElige a un jugador para ver sus estadisticas: ");
		scanf("%d", &opcion);
	} while (opcion>12 || opcion<1);


	system("cls");
	printf("Estas son las estadisticas del jugador elegido:\n");
	j = jugadores*12-13+opcion; 

	printf("\nNombre: %s  \nPartidos: %d\nGoles: %d\nAsistencias: %d\n", stats[j].nombre, stats[j].partidos, stats[j].goles, stats[j].asistencias);

	fclose(f8);
			}
			else if(equipo==6){
				
		FILE * f24 = fopen("GrupoH.txt","r");	
		if(f24 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f24);
		printf("%c",aux);
}
	printf("\n");
		fclose(f24);
		
		
}	
		break;
	    default://Si no se ha seleccionado una opcion correcta salta el siguiente aviso
	     printf("No ha escogido una opcion correcta:\n");
	      scanf("%c",&op);	
	      
}

//Esta seria la parte de los minijuegos si el usuario ha escogido la opcion dos en el menu principal
}else if(opcion==2){
	
 	FILE * f9 = fopen("Estadistica.txt","r");	
		if(f9 == NULL ){
			printf("ERROR\n");
			return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f9);
		printf("%c",aux);
}
	printf("\n");
		fclose(f9);
		
		
}
	
}else if(eleccion==2){
	
	do{
		
	//Te da la opcion de elccion entre nuestros tres minijuegos
	printf("S) Simulacion de juego\n");
	printf("C) Crea tu propia champions\n");
	printf("O) Once ideal\n");

	fflush(stdin);
	scanf("%c",&el);
	fflush(stdin);
	switch (el){
	//Aqui comenzaria el primer minijuego de simulacion de juegos
	case 'S':
	case 's':
	//Cada jugador podra elegir un equipo y comienza el juego....	
	printf("Jugador 1 elija un equipo: PSG(1), Bayern Munchen(2), Manchester City(3), Real Madrid(4), Atletico de Madrid(5) \n");
	scanf("%c",&jugador1);
	printf("Jugador 2 elija su equipo: PSG(1), Bayern Munchen(2), Manchester City(3), Real Madrid(4), Atletico de Madrid(5)\n");
	fflush(stdin);
	scanf("%c",&jugador2);
	//Segun las opciones elegidas por cada jugador el programa recopilara las mismas para luego dar como ganador a un equipo al azar
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
	printf("\n");

	
	} else if((jugador1=='1' && jugador2=='5')||(jugador1=='5'&& jugador2=='1')){
		srand(time(NULL));
		
	char *palabras[] = {"PSG", "Atletico de Madrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("el ganador es el: %s\n", palabra); 
	printf("\n");

	
	} else if((jugador1=='2' && jugador2=='4')||(jugador1=='4'&& jugador2=='2')){
		srand(time(NULL));
		
	char *palabras[] = {"Bayern Munchen", "Real Madrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("El ganador es el: %s\n", palabra);
	printf("\n");
 
	
	} else if((jugador1=='2' && jugador2=='5')||(jugador1=='5'&& jugador2=='2')){
		srand(time(NULL));
		
	char *palabras[] = {"Bayern Munchen", "Atletico de Madrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("El ganador es el: %s\n", palabra); 
	printf("\n");

	
	} else if((jugador1=='3' && jugador2=='4')||(jugador1=='4'&& jugador2=='3')){
		srand(time(NULL));
		
	char *palabras[] = {"Manchester city", "Real Madrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("El ganador es el: %s\n", palabra); 
	printf("\n");

	
	} else if((jugador1=='3' && jugador2=='5')||(jugador1=='5'&& jugador2=='3')){
		srand(time(NULL));
		
	char *palabras[] = {"Manchester City", "Atletico de MAdrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("El ganador es el: %s\n", palabra); 
	printf("\n");
	
	} else if((jugador1=='5' && jugador2=='4')||(jugador1=='4'&& jugador2=='5')){
		srand(time(NULL));
		
	char *palabras[] = {"Atletico de Madrid", "Real Madrid"}; 
	int tamanyo = sizeof(palabras) / sizeof(char *); 
	char *palabra = obtieneAlAzar(palabras, tamanyo); 
	printf("El ganador es el: %s\n", palabra); 
	printf("\n");

	} 
	else if ((jugador1=='1' && jugador2=='1')||(jugador1=='2'&& jugador2=='2')||(jugador1=='3'&& jugador2=='3')||(jugador1=='4'&& jugador2=='5')||(jugador1=='5'&& jugador2=='5')){
	printf("Habeis quedado empate\n");
	}
	printf("\n");
	 	break;
	 	//Aqui comenzara el segundo minijuego de realizar la champions desde octavos de final por el jugador 
	case 'c':
	case 'C':;

	FILE * f10 = fopen("Eliminatorias.txt","r");	
	if(f10 == NULL ){
		printf("ERROR\n");
		return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f10);
		printf("%c",aux);
}
	printf("\n");
		fclose(f10);

	FILE *pf11; 
	
	pf11 = fopen("minijuego-prediccion(w).txt", "w"); //Crea el fichero
	
	if(pf11 == NULL){ //Salta un error si no se ha podido crear el fichero
		printf("ERROR");
	}

	fflush(stdin);
	
//Pide elegir un equipo entre los dados y se va guardando la variable en el fichero hasta el ganador
	printf("\nElige al ganador entre bayern y Lazio (Octavos de final 1): ");gets(equipo1);
	printf("Elige al ganador entre Psg y Barcelona (Octavos de final 2): "); gets(equipo2); 
	printf("Elige al ganador entre city y monchedgladbach (Octavos de final 3): "); gets(equipo3); 
	printf("Elige al ganador entre borussia y Sevilla (Octavos de final 4): "); gets(equipo4); 
	printf("Elige al ganador entre madrid y Atalanta (Octavos de final 5): " ); gets(equipo5); 
	printf("Elige al ganador entre liverpool y Leipzig (Octavos de final 6): "); gets(equipo6); 
	printf("Elige al ganador entre Oporto y Juventus (Octavos de final 7): "); gets(equipo7); 
	printf("Elige al ganador entre Chelsea y Atletico de Madrid (Octavos de final 8): "); gets(equipo8); 
	
	printf("\nElige al ganador entre %s y %s (Cuartos de final 1): ", equipo1, equipo2); gets(equipo9); 
	printf("Elige al ganador entre %s y %s (Cuartos de final 2): ", equipo3, equipo4); gets(equipo10); 
	printf("Elige al ganador entre %s y %s (Cuartos de final 3): ", equipo5, equipo6); gets(equipo11); 
	printf("Elige al ganador entre %s y %s (Cuartos de final 4): ", equipo7, equipo8); gets(equipo12); 
	
	printf("\nElige al ganador entre %s y %s (Semifinal 1): ", equipo9, equipo10); gets(equipo13); 
	printf("Elige al ganador entre %s y %s (Semifinal 2): ", equipo11, equipo12); gets(equipo14); 
	
	printf("\nElige al ganador entre %s y %s (Final): ", equipo13, equipo14); gets(equipo15); 
	
	printf("Tu campeon de la Champions es: %s", equipo15); 
	
	//Se guarda en el fichero correspondiente los equipos clasificados en las eliminatorias anteriores
	fprintf(pf11, "Clasificado Octavos de final 1: %s\n", equipo1);
	fprintf(pf11, "Clasificado Octavos de final 2: %s\n", equipo2); 
	fprintf(pf11, "Clasificado Octavos de final 3: %s\n", equipo3); 
	fprintf(pf11, "Clasificado Octavos de final 4: %s\n", equipo4);
	fprintf(pf11, "Clasificado Octavos de final 5: %s\n", equipo5); 
	fprintf(pf11, "Clasificado Octavos de final 6: %s\n", equipo6); 
	fprintf(pf11, "Clasificado Octavos de final 7: %s\n", equipo7);
	fprintf(pf11, "Clasificado Octavos de final 8: %s\n", equipo8); 
	
	fprintf(pf11, "\nClasificado Cuartos de final 1: %s\n", equipo9); 
	fprintf(pf11, "Clasificado Cuartos de final 2: %s\n", equipo10);
	fprintf(pf11, "Clasificado Cuartos de final 3: %s\n", equipo11); 
	fprintf(pf11, "Clasificado Cuartos de final 4: %s\n", equipo12);
	
	fprintf(pf11, "\nClasificado Semifinal 1: %s\n", equipo13); 
	fprintf(pf11, "Clasificado Semifinal 2: %s\n", equipo14); 
	
	fprintf(pf11, "\nCampeon de la Champions: %s\n", equipo15);
	//Una vez terminado el juego podras ver en el fichero correpondiente todos tus resultados
	printf("\n\nAhora podras ver tu eleccion en el fichero ""minijuego-prediccion.txt""");
	
	fclose(pf11); //Cierra el fichero
	 	break;
	 //Aqui comienza el ultimo juego de la eleccion del once ideal	
	case 'o':
	case 'O':;
	
	
	FILE *f12; 
	
	f12 = fopen("onceideal(w).txt", "w"); //Crea el fichero
	
	if(f12 == NULL){ //Salta un error si no se ha podido crear el fichero
		printf("ERROR");
	}	

	fflush(stdin);

		FILE * f13 = fopen("portero.txt","r");	
	if(f13 == NULL ){
		printf("ERROR\n");
		return 0;
}
		
	while(aux != EOF){
		aux=fgetc(f13);
		printf("%c",aux);
}
	printf("\n");
		fclose(f13);
    printf("Elija portero:\n");
	gets(jugadores1);
	fflush(stdin);
	system("pause");

	FILE * f14 = fopen("defensa.txt","r");	
	if(f14 == NULL ){
		printf("ERROR\n");
		return 0;
}
		
	while(aux2 != EOF){
		aux2=fgetc(f14);
		printf("%c",aux2);
}
	printf("\n");
		fclose(f14);
	system("cls");
	printf("Elija el lateral derecho: \n");
	gets(jugadores2);
	printf("Elija primer central: \n");
	gets(jugadores3);
	printf("Elija segundo central: \n");
	gets(jugadores4);
	printf("Elija lateral izquierdo: \n");
	gets(jugadores5);
	fflush(stdin);
	system("pause");

		FILE * f15 = fopen("mediocentro.txt","r");	
	if(f15 == NULL ){
		printf("ERROR\n");
		return 0;
}
		
	while(aux3 != EOF){
		aux3=fgetc(f15);
		printf("%c",aux3);
}
	printf("\n");
		fclose(f15);
		
	system("cls");

	printf("Elija el primer mediocentro : \n");
	gets(jugadores6);
	printf("Elija el segundo centrocampista: \n");
	gets(jugadores7);
	printf("Elija el ultimo mediocentro: \n");
	gets(jugadores8);
	fflush(stdin);
	system("pause");

		FILE * f16 = fopen("delantero.txt","r");	
	if(f16 == NULL ){
		printf("ERROR\n");
		return 0;
}
		
	while(aux4 != EOF){
		aux4=fgetc(f16);
		printf("%c",aux4);
}
	printf("\n");
		fclose(f16);
	
	system("cls");

	printf("Elija extremo derecho: \n");
	gets(jugadores9);
	printf("Elija delantero centro: \n");
	gets(jugadores10);
	printf("Elija el extremo izquierdo: \n");
	gets(jugadores11);
	
	fflush(stdin);
	system("cls");

	
			
			printf("          %s\n",jugadores1);
			printf("%s\t",jugadores2); printf("%s\t",jugadores3);    printf("%s\t",jugadores4);   printf("%s\n",jugadores5);
              printf("%s\t",jugadores6);    printf("%s\t",jugadores7);   printf("%s\n",jugadores8);		
			  	 printf("%s\t",jugadores9);    printf("%s\t",jugadores10);   printf("%s\n",jugadores11);
			  	 
			  	 
			fprintf(f12,"          %s\n",jugadores1);
			fprintf(f12,"%s\t",jugadores2); fprintf(f12,"%s\t",jugadores3);    fprintf(f12,"%s\t",jugadores4);   fprintf(f12,"%s\n",jugadores5);
              fprintf(f12,"%s\t",jugadores6);    fprintf(f12,"%s\t",jugadores7);   fprintf(f12,"%s\n",jugadores8);		
			  	 fprintf(f12,"%s\t",jugadores9);    fprintf(f12,"%s\t",jugadores10);   fprintf(f12,"%s\n",jugadores11);
			  	
	printf("\n");

	printf("Si quiere ver toda su eleccion en el once ideal puede consultarlo en el fichero ""once.txt""");
	
	printf("\n");


	fclose(f12);//Cierra el fichero creado

	printf("\n");
	
	       
break;
	 	default:printf ("Ha introducido un valor incorrecto\n");
		}
		//Una vez terminado culquiera de los minijuegos te pregunta si quiere volver a jugar
		printf("\n%cQuieres volver a jugar?\n",168);
		printf("Pulse 1 en caso afirmativo; Pulse 2 si no quieres volver a jugar\n");
		fflush(stdin);
		scanf("%d", &opcion);
	}
	
	//Termina el bucle do, si la opcion elegida no es 1
	while(opcion==1);
}
	
	//Siempre que termina alguna de las opciones te pregunta si quiere volver al menu principal
	printf("Si quiere volver al menu principal pulse 1:\n En cambio, si quiere salir pulse 2:\n");
	scanf("%d", &alternativa);

	
}

//Termina el bucle do, si la opcion elegida no es 1
while(alternativa==1);

 //Si la opcion elegida no ha sido 1 se terminara el programa	
printf("Fin del programa.\n");
	
return 0;


}
