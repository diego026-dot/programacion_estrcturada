#include<stdio.h>
#include<stdlib.h>

int main(int srgc, char *argv[]){
	
	int m[3][3],m2[3][3];
	int i,j,esc;
	
	printf("Ingresa el valor escalar\n");
	scanf("%d",&esc);
	printf("Ingresa el valor e la matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&m[i][j]);
			m2[i][j]=m[i][j]*esc;
			
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d",m[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d",m2[i][j]);
	}
	
	}
	return 0;
}
