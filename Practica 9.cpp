#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int id[9],bday[9],grade[9];
	char name[9][20],lname[9][20],school[9][50],carrer[9][50],genero[9][2];
	int x,y;
	
	for(x=0;x<9;x++){
	
		printf("Ingrese la matricula del estudiante:\n");
		scanf("%d",&id[x]);
	
		printf("Ingrese el nombre del estudiante:\n");
		scanf("%s",&name[x]);
		fflush(stdin);
		
		printf("Ingrese el apellido:\n");
		scanf("%s",&lname[x]);
		fflush(stdin);
		
		printf("Ingrese su cumple años:\n");
		scanf("%d",&bday[x]);
		fflush(stdin);
	
		printf("Ingrese su escuela:\n");
		scanf("%s",&school[x]);
		fflush(stdin);
		
		printf("Ingrese el grado que cursa:");
		scanf("%d",&grade[x]);
		
		printf("Ingrese su carrera:");
		scanf("%s",&carrer[x]);
		fflush(stdin);
		
		printf("Ingrese su genero:");
		scanf("%s",genero[x]);
		
		system("cls");
	}
		
	for(x=0;x<9;x++){
		for(y=0;y<9;y++){
			
		printf("\n\nEstudiante %d\n",y);
			
		printf("\nMatricula:%d",&id[x]);
		printf("\nNombre:%s",&name[x]);
		printf("\nApellido:%s",&lname[x]);
		printf("\nNacimiento:%d",&bday[x]);
		printf("\nEscuela:%s",&school[x]);
		printf("\nGrado:%d",&grade[x]);
		printf("\nCarrera:%s",&carrer[x]);
		printf("\nGenero:%s",&genero[x]);	
			
			
			
			
		}
		
	
	}
	
	system("pause");
	return 0;

}
