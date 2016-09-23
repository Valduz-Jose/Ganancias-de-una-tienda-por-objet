#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float preciopredeterminado,nuevoprecio;
	int continuar;
	system("cls");
	fflush(stdin);
	system ("color 0F");
	do{
		printf("\t\t\t\t\tCALCULAR PORCENTAJE (%c) DE GANANCIAS\t\t\t\t\t",37);
		printf("\n\n\t\tValor predeterminado del objeto comprado: ");
		scanf("%f",&preciopredeterminado);
		nuevoprecio=((preciopredeterminado*30)/100)+preciopredeterminado;
		printf("\n\t\tDebera venderlo en %.2f si quiere obtener un 30%c de ganacias",nuevoprecio,37);
		printf("\n\n\t\t\tIntroduce (8) para Continuar: ");
		scanf("%d",&continuar);
		system("cls");
	}
	while(continuar==8);
	printf("\t\t\t\t\tCALCULAR PORCENTAJE (%c) DE GANANCIAS\t\t\t\t\t",37);
	printf("\n\n\n\t\t\t\t\t--TCHAU--\t\t\t\t\t");
	return 0;
}
