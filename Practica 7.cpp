#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	int prm[50],num,i,j,k;
	
	prm[0]=2;
	prm[1]=3;
	printf("Ingresa un numero menor a 100\n");
	scanf("%d",&num);
	if(num<=100){
		for(i=0;i<=num;i++){
			for(j=2;j<=num;j++){
				if(i==j)
				printf("%d\n",i);
				else if (i%j==0)
				break;
				
			}
		}
	}else printf("NUmero invalildo");
	return 0;
	
}
