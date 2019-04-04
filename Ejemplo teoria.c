//Ejemplo vector
//Ejercicio que devuelva el numero mas grande de un vector

#include <stdio.h>
#define TAM 5
void cargar (int v[TAM]);
int maximo (int v[TAM]);


int main (){
	
	int v[TAM];
	cargar (v);
	
	int maxim=maximo(v);
	printf("El mayor es %d.\n",maxim);
	
	
	system("pause");
	return 0;
}

void cargar(int v[TAM]){
	
	int i;
	
	for(i = 0; i <= TAM; i++){
		printf("Introduce el vector: ");
		scanf("%d",&v[i]);
	}
}

int maximo(int v[TAM]){
	
	int max = v[0];
	int i;
	
	for (i = 0; i <= TAM; i++){
		if (v[i]>max){
			max=v[i];
		}
		
	}
	return max;
}
