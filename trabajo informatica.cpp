#include<stdio.h>
int main()
{
	int a, b, c, sel;
	printf("Eliga que quiere ver. para ver los grupos pulsa (a), para jugar pulse (b), para cerrar el programa pulse (c): \n");
	scanf("%c",&sel);
	if(sel=='a')
	printf("has elegido ver grupos");
	else
	if(sel=='b')
	printf("has elegido jugar");
	else
	if(sel=='c')
	printf("has salido del programa");
	else
	return 0;

}
