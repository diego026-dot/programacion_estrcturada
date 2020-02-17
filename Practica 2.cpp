//Programa que realiza todas las operaciones

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//Declaracion de variables
	
	int num1, num2, sum, rest, multi, divi, resi;
	
	//Ingreso de numeros
	
	printf("Ingresa el primer numero:\n");
	scanf("%d",&num1);
	printf("\nIngresa el segundo numero:\n");
	scanf("%d",&num2);
	
	//Operaciones
	
	sum= num1 + num2;
	multi= num1 * num2;
	rest= num1 - num2;
	divi= num1 / num2;
	resi= num1 % num2;
	
	//Salida
	
	printf("\nLa suma de %d + %d es: %d\n",num1, num2,sum);
	printf("La resta de %d - %d es: %d\n",num1,num2,rest);
	printf("La multiplicacion de %d x %d es: %d\n",num1,num2,multi);
	printf("La divison de %d / %d es: %d\n",num1,num2,div);
	printf("El residuo de %d y %d es: %d\n",num1,num2,resi);
	
	system("pause");

}
