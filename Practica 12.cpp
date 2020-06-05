#include <stdio.h>
#include <stdlib.h>
#define T 10

struct datosAlumno{
	int matricula,cumple,year;
	char nombre[20],apellido[20],escuela[20],carrera[20],genero[20];
}A1[T];

void crearAlumno(struct datosAlumno *alumno,int matricula,char nombre[],char apellido[],int cumple,char escuela[],int year,char carrera[],char genero[]);

int main() {
		int i,j;
	
	for(i=0;i<T;i++){
		
		printf("Ingrese su matricula: ");
		scanf("%d",&A1[i].matricula);
		
		printf("Ingrese su nombre: ");
		scanf("%s",&A1[i].nombre);
		
		printf("Ingrese su apellido: ");
		scanf("%s",&A1[i].apellido);
		fflush(stdin);
		
		printf("Ingrese el año de nacimiento: ");
		scanf("%d",&A1[i].cumple);
		
		printf("Ingrese la escuela: ");
		scanf("%s",&A1[i].escuela);
		
		printf("Ingrese el año: ");
		scanf("%d",&A1[i].year);
		fflush(stdin);
		
		printf("Ingrese la carrera: ");
		scanf("%s",&A1[i].carrera);
		
		printf("Ingrese el genero: ");
		scanf("%s",&A1[i].genero);
	}
	
	system("cls");
	
	printf("\nReporte de alumnos\n");
	
	for(i=0;i<T;i++)
	printf("Matricula: %d\nNombre: %s\nApellido: %s\nBirth: %d\nEscuela: %s\nAno: %d\nCarrera: %s\nGenero: %s\n",A1[i].matricula,A1[i].nombre,A1[i].apellido,A1[i].cumple,A1[i].escuela,A1[i].year,A1[i].carrera,A1[i].genero);
	return 0;
}

void crearAlumno(struct datosAlumno *alumno,int matricula,char nombre[],char apellido[],int cumple,char escuela[],int year,char carrera[],char genero[])
{
	strcpy(alumno->nombre,nombre);
	strcpy(alumno->apellido,apellido);
	strcpy(alumno->escuela,escuela);
	strcpy(alumno->carrera,carrera);
	strcpy(alumno->genero,genero);
	alumno->matricula=matricula;
	alumno->cumple=cumple;
	alumno->year=year;
}
