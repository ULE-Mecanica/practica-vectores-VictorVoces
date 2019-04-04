//Ejercicio que compare dos vectores y diga si son iguales o no.

#include <stdio.h>
#include <math.h>
#define TAM 2

void cargar (int v1[TAM], int v2[TAM]);
void modulo (int v1[TAM], int v2[TAM]);

int main (){
	
	int v1[TAM], v2[TAM];
	cargar(v1,v2);
	
	modulo (v1,v2);
	
	
	
	
	
	system ("pause");
	return 0;
}
void cargar (int v1[TAM], int v2[TAM]){
	
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Introduce el primer vector:  ");
		scanf("%f",&v1[i]);
		printf("Introduce el segundo vector:  ");
		scanf("%f",&v2[i]);
	}

}
void modulo (int v1[TAM], int v2[TAM]){
	float raiz1,raiz2,cuadrado1,cuadrado2;
	
	cuadrado1 = (pow(v1[0],2) + pow(v1[1],2));
	raiz1 = sqrt(cuadrado1);
	cuadrado2 = (pow(v2[0],2) + pow(v2[1],2));
	raiz2 = sqrt(cuadrado2);
	
	if (raiz1 == raiz2){
		printf("Los vectores son iguales.\n");
	}
	else{
		printf ("Los vectores son diferentes.\n");
	}
	
}

