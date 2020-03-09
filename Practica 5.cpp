#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num, prom, sum=0, i=0;
	
	printf("Ingresa un numero\n");
	scanf("%d",&num);
	
if(num<0){
	printf("Erro numero invalido\n");
		
		}
		else
		
		do{
			i= i+1;
			sum=sum+num;
			printf("Ingresa un numero\n");
			scanf("%d",&num);

		}while(num>=0);
		
	prom= sum/i;
	printf("El promedio de los numeros es:%d\n",prom);
	
	return 0;
	
}


