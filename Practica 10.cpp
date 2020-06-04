#include <stdio.h>
#include <stdlib.h>
#define T 10

struct datosAlumno{
	
	int mat,bday,anio;
	char nombre[20],apellido[20],school[20],carrera[20],genero[20];

}A1[T];

int main() {
	int i,j;
	for(i=0;i<T;i++){
		
		printf("Ingrese su matricula\n");
		scanf("%d",&A1[i].mat);
		
		printf("Ingrese su nombre\n");
		scanf("%s",&A1[i].nombre);
		
		printf("Ingrese su apellido\n");
		scanf("%s",&A1[i].apellido);
		fflush(stdin);
		
		printf("Ingrese el dia de nacimiento\n");
		scanf("%d",&A1[i].bday);
		
		printf("Ingrese la escuela\n");
		scanf("%s",&A1[i].school);
		
		printf("Ingrese el a%co\n",164);
		scanf("%d",&A1[i].anio);
		
		printf("Ingrese la carrera\n");
		scanf("%s",&A1[i].carrera);
		
		printf("Ingrese el genero\n");
		scanf("%s",&A1[i].genero);
	}
	system("cls");
	printf("\nReporte de alumnos\n");
	for(i=0;i<T;i++)
	printf("Matricula: %d\nNombre: %s\nApellido: %s\nBirth: %d\nEscuela: %s\nAno: %d\nCarrera: %s\nGenero: %s\n",A1[i].mat,A1[i].nombre,A1[i].apellido,A1[i].bday,A1[i].school,A1[i].anio,A1[i].carrera,A1[i].genero);
	
	return 0;
}
