/*  Programa que en la funci�n principal lea las coordenadas (x,y) de 2 puntos 
y se las pase a una funci�n que calcule la distancia Eucl�dea entre esos puntos. 
Los argumentos de dicha funci�n ser�n dos vectores de dos reales, 
uno del primer punto (coordenadas x e y) y otro del otro punto (coordenadas x e y). 
La funci�n principal imprimir� el resultado devuelto por la funci�n por pantalla. */

#include <stdio.h>
#include <math.h>
#define TAM 2

float disteuclidea (float x[TAM],float y[TAM]);
void cargar (float x[TAM],float y[TAM]);

int main (){
	
	float x[TAM];float y[TAM];
	
	
	cargar(x,y);
	
	
	
	
	float res = disteuclidea(x,y);
	
	printf("La distancia euclidea es %f.\n",res);
	
	
	system("pause");
	return 0;
}
void cargar(float x[TAM],float y[TAM]){
	int i;
	
	for(i = 0; i < 2; i++){
		printf("Introduce las coordenadas x0,y0; ");
		scanf("%f",&x[i]);
		printf("Introduce las coordenadas x1,y1: ");
		scanf("%f",&y[i]);
	}
}
float disteuclidea(float x[TAM], float y[TAM]){
	
	float raiz;
	raiz=0;
	
	float resta1 = x[0] - y[0];
	float resta2 = x[1] - y [1];
	
	raiz = sqrt(pow (resta1,2)+pow(resta2,2));
	
 	return raiz;
	
}
