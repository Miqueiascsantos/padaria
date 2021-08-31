#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float y=0;
	float r=0;
	float r1=0;
	float r2=0;
	float r3=0;
	
	
	printf("Quantos paes voce quer: ");
	scanf("%f", &x);
	
	printf("Quantas broas voce quer: ");
	scanf("%f", &y);
	
	r= x * 0.12;
	r1= y * 1.50;
	r2= r + r1;
	r3= r2 * 0.1;
	
	printf(" Valor a pagar pelos paes: %f r$\n",r);

	printf(" Valor a pagar pelas broas: %f r$\n",r1);
	
	printf(" Valor total a pagar: %f r$\n",r2);
	
	
	printf(" Valor a ser investido na poupança: %f r$\n",r3);
	
	system("pause");
	
	return 0;
}
